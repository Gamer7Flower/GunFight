--
-- DESCRIPTION
--
-- @COMPANY **
-- @AUTHOR **
-- @DATE ${date} ${time}
--

---@type BP_GFPlayerController_C
local M = UnLua.Class()

function M:ReceiveSetupPlayerInputComponent(PlayerInputComponent)
    -- 绑定输入映射
    UnLua.Input.BindAxis("MoveForward", self, self.MoveForward)
    UnLua.Input.BindAxis("MoveRight", self, self.MoveRight)
    UnLua.Input.BindAxis("Turn", self, self.Turn)
    UnLua.Input.BindAxis("LookUp", self, self.LookUp)
end
-- 轴映射处理函数
function M:MoveForward(Value)
    if self.Pawn and Value ~= 0 then
        self.Pawn:AddMovementInput(self.Pawn:GetActorForwardVector(), Value)
    end
end

function M:MoveRight(Value)
    if self.Pawn and Value ~= 0 then
        self.Pawn:AddMovementInput(self.Pawn:GetActorRightVector(), Value)
    end
end

function M:Turn(Value)
    if self.Pawn and Value ~= 0 then
        self.Pawn:AddControllerYawInput(Value)
    end
end

function M:LookUp(Value)
    if self.Pawn and Value ~= 0 then
        self.Pawn:AddControllerPitchInput(Value)
    end
end

--- 绑定操作映射
local BindAction = UnLua.Input.BindAction
BindAction(M, "Jump", "Pressed", function(self, Key)
    if self.Pawn then
        self.Pawn:Jump()
    end
end)

BindAction(M, "Jump", "Released", function(self, Key)
    if self.Pawn then
        self.Pawn:StopJumping()
    end
end)

BindAction(M, "Fire", "Pressed", function(self, Key)
    if self.Pawn then
        print("鼠标左键点击")
        local Player = self.Pawn
        local GAClass = UE.UClass.Load('/Game/GAS/PlayerAbility/GA_Fire.GA_Fire_C')
        local su = Player.MyASC:TryActivateAbilityByClass(GAClass)
        print("激活GA：",su)
    end
end)


-- HUD相关*****************************

-- 执行更新PlayerScreenUI的倒计时
function M:UpDateUI(Time)
    local HUD = self:GetHUD()
    if HUD then
        local ScreenUI = HUD.PlayerScreenUI
        if ScreenUI then
            ScreenUI.Countdown:SetText(tostring(Time))
        end
    end
end

-- 执行更新PlayerScreenUI的PlayerName
function M:UpDateUI_PlayerName(PlayerIndex,NewName)
    local HUD = self:GetHUD()
    if HUD then
        local ScreenUI = HUD.PlayerScreenUI
        if ScreenUI then
            if PlayerIndex == 1 then
                ScreenUI.PlayerName01:SetText(NewName)
            else if PlayerIndex == 2 then
                ScreenUI.PlayerName02:SetText(NewName)
            end
            end
        end
    end
end

-- 执行更新PlayerScreenUI的PlayerScore
function M:UpDateUI_PlayerScore(PlayerIndex,NewScore)
    local HUD = self:GetHUD()
    if HUD then
        local ScreenUI = HUD.PlayerScreenUI
        if ScreenUI then
            if PlayerIndex == 1 then
                ScreenUI.PlayerScore01:SetText(NewScore)
            else if PlayerIndex == 2 then
                ScreenUI.PlayerScore02:SetText(NewScore)
            end
            end
        end
    end
end

-- 执行更新PlayerScreenUI的PlayerHPBar
function M:UpDateUI_PlayerHPBar(PlayerIndex,NewHPVal,MaxHP)
    local HUD = self:GetHUD()
    if HUD then
        local ScreenUI = HUD.PlayerScreenUI
        if ScreenUI then
            if PlayerIndex == 1 then
                print("Player01血条修改")
                ScreenUI.PlayerHPBar01:SetPercent(NewHPVal/MaxHP)
            else if PlayerIndex == 2 then
                print("Player02血条修改")
                ScreenUI.PlayerHPBar02:SetPercent(NewHPVal/MaxHP)
            end
            end
        end
    end
end
-- function M:Initialize(Initializer)
-- end

-- function M:UserConstructionScript()
-- end


-- function M:ReceiveBeginPlay() 
-- end

-- function M:ReceiveEndPlay()
-- end

-- function M:ReceiveTick(DeltaSeconds)
-- end

-- function M:ReceiveAnyDamage(Damage, DamageType, InstigatedBy, DamageCauser)
-- end

-- function M:ReceiveActorBeginOverlap(OtherActor)
-- end

-- function M:ReceiveActorEndOverlap(OtherActor)
-- end

return M