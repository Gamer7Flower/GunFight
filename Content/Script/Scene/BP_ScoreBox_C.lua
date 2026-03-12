--
-- DESCRIPTION
--
-- @COMPANY **
-- @AUTHOR **
-- @DATE ${date} ${time}
--

---@type ScoreBox_C
local M = UnLua.Class()

-- 接收子弹碰撞发送的消息
function M:OnHitByBullet(Index)
    print("BulletIndex:",Index)
    local ScoreBoxManager_Class = UE.UClass.Load('/Game/BluePrints/Scene/ScoreBoxManager.ScoreBoxManager_C')
    local ScoreBoxManager = UE.UGameplayStatics.GetActorOfClass(self, ScoreBoxManager_Class)
    if ScoreBoxManager then
        local BPI_ScoreInterface = UE.UClass.Load('/Game/BluePrints/Projectile/BPI_ScoreInterface.BPI_ScoreInterface_C')
        if UE.UKismetSystemLibrary.DoesImplementInterface(ScoreBoxManager, BPI_ScoreInterface) then
            BPI_ScoreInterface.ScoreBoxToManager(ScoreBoxManager,self:K2_GetActorLocation())
            self:CallGameModeEvent(Index)
            self:K2_DestroyActor()
        end
    end
end

-- 告知GameMode去执行响应加分事件
function M:CallGameModeEvent(PlayerIndex)
    local World = self:GetWorld()
    if World then
        local GameMode = UE.UGameplayStatics.GetGameMode(World)
        if GameMode then
            GameMode:CallSetPlayerScore(PlayerIndex)
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
