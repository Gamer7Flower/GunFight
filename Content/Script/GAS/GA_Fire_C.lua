--
-- DESCRIPTION
--
-- @COMPANY **
-- @AUTHOR **
-- @DATE ${date} ${time}
--

---@type GA_Fire_C
local M = UnLua.Class()

function M:K2_ActivateAbility()

    if not self:K2_HasAuthority() then return end

    if not self:K2_CommitAbility() then
        self:K2_EndAbility()
        return
    end

    local Player = self:GetActorInfo().OwnerActor
    if Player then
        Player:PlayMontage()
    end
end


return M