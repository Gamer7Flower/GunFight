--
-- DESCRIPTION
--
-- @COMPANY **
-- @AUTHOR **
-- @DATE ${date} ${time}
--

---@type BP_PlayerStateBase_C
local M = UnLua.Class()

-- 玩家名部分******
function M:SetPlayerName(PlayerIndex,NewName)
    print("--------设置玩家名--------")
    self:NameChange_Server(PlayerIndex,NewName)
end

function M:NameChange_Server_RPC(PlayerIndex,NewName)
    self:UpdatePlayerName(PlayerIndex,NewName)
end

function M:UpdatePlayerName_RPC(PlayerIndex,NewName)
    local PC = UE.UGameplayStatics.GetPlayerController(self,0)
    if PC then
        PC:UpDateUI_PlayerName(PlayerIndex,NewName)
    end
end


-- 玩家分数部分******
function M:SetPlayerScore(PlayerIndex,NewScore)
    print("--------设置玩家分数--------")
    self:ScoreChange_Server(PlayerIndex,NewScore)
end

function M:ScoreChange_Server_RPC(PlayerIndex,NewScore)
    self:UpdatePlayerScore(PlayerIndex,NewScore)
end

function M:UpdatePlayerScore_RPC(PlayerIndex,NewScore)
    local PC = UE.UGameplayStatics.GetPlayerController(self,0)
    if PC then
        PC:UpDateUI_PlayerScore(PlayerIndex,NewScore)
    end
end 


-- function M:Initialize()
-- end

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
