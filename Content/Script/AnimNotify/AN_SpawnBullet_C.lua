--
-- 接收来自开火动画的通知
-- 这里仅用作激活特效
--
-- @COMPANY **
-- @AUTHOR **
-- @DATE ${date} ${time}
--

---@type AN_SpawnBullet_C
local M = UnLua.Class()

function M:Received_Notify()

    self:SpawnBulletEffect()
    return true
end

-- 激活特效
function M:SpawnBulletEffect()
    local PC = UE.UGameplayStatics.GetPlayerController(self, 0)  -- 获取玩家控制器
    local Player = PC:K2_GetPawn()
    if Player then
        local Effect = Player.MuzzleFire
        if Effect then
            Effect:Activate()
            local co = coroutine.create(function()
                UE.UKismetSystemLibrary.Delay(self, 0.15)
                Effect:Deactivate()
            end)
            coroutine.resume(co)
        end
    end
end

return M