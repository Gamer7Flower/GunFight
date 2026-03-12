--
-- DESCRIPTION
--
-- @COMPANY **
-- @AUTHOR **
-- @DATE ${date} ${time}
--

---@type BP_GameModeBase_C
local M = UnLua.Class()

function M:K2_PostLogin(PlayerController)
    print("玩家登录了:", PlayerController:GetName())
    local co = coroutine.create(function()
        UE.UKismetSystemLibrary.Delay(self, 2)
        local Player = PlayerController:K2_GetPawn()
        if Player then
            --self:GivePlayerAbility(Player)
        end
        self.ArrPlayerState:Add(Player.PlayerState)
        Player.PlayerState.P_Name = string.format("PLAYER_%d", Player:GetController().PlayerState.PlayerId)
        Player.PlayerState.P_Index = self.ArrPlayerState:Find(Player.PlayerState)
        Player.PlayerState:SetPlayerName(Player.PlayerState.P_Index,Player.PlayerState.P_Name)
    end)
    coroutine.resume(co)
end

function M:CallSetPlayerScore(PlayerIndex)
    print(PlayerIndex,"通知，GM收到")
    local PS = self.ArrPlayerState:Get(PlayerIndex)
    local Score = math.random(5, 10)
    PS.P_Score = PS.P_Score + Score
    PS:SetPlayerScore(PlayerIndex, PS.P_Score)
end

-- function M:Initialize(Initializer)
-- end

-- function M:UserConstructionScript()
-- end

--function M:ReceiveBeginPlay()
--    
--end

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
