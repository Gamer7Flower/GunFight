--
-- DESCRIPTION
--
-- @COMPANY **
-- @AUTHOR **
-- @DATE ${date} ${time}
--

---@type BP_Bullet_C
local M = UnLua.Class()

function M:ReceiveHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit)
    if Other then
        print("Other:",Other:GetName())
        local EffectObj = UE.LoadObject('/Game/Power_explosion_vfx/Particles/NO_decal/OnBulletHitEffect.OnBulletHitEffect')
        local BoomSound = UE.LoadObject('/Game/Sound/BoomSound_Cue.BoomSound_Cue')
        if EffectObj then
            -- 生成特效和音效
            local Particle = UE.UGameplayStatics.SpawnEmitterAtLocation(self, EffectObj, HitLocation, UE.FRotator(0, 0, 0), UE.FVector(0.5, 0.5, 0.5), true, UE.EPSCPoolMethod.None, true)
            local Sound = UE.UGameplayStatics.SpawnSoundAtLocation(self, BoomSound, HitLocation)
            if Particle and Sound then
                local BPI_ScoreInterface = UE.UClass.Load('/Game/BluePrints/Projectile/BPI_ScoreInterface.BPI_ScoreInterface_C')
                local HasImplement = UE.UKismetSystemLibrary.DoesImplementInterface(Other, BPI_ScoreInterface)
                if HasImplement then
                    if self:HasAuthority() then
                        BPI_ScoreInterface.OnHitByBullet(Other,self.Index)
                    end
                end
                self:K2_DestroyActor()
            end
        end
    end
end


--function M:Initialize(Initializer)
--    
--end

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
