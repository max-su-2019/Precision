#include "ModAPI.h"
#include "PrecisionHandler.h"

namespace Messaging
{
	APIResult PrecisionInterface::AddPreHitCallback(SKSE::PluginHandle a_pluginHandle, PreHitCallback&& a_preHitCallback) noexcept
	{
		if (PrecisionHandler::GetSingleton()->AddPreHitCallback(a_pluginHandle, a_preHitCallback)) {
			return APIResult::OK;
		} else {
			return APIResult::AlreadyRegistered;
		}
	}

	APIResult PrecisionInterface::AddPostHitCallback(SKSE::PluginHandle a_pluginHandle, PostHitCallback&& a_postHitCallback) noexcept
	{
		if (PrecisionHandler::GetSingleton()->AddPostHitCallback(a_pluginHandle, a_postHitCallback)) {
			return APIResult::OK;
		} else {
			return APIResult::AlreadyRegistered;
		}
	}

	APIResult PrecisionInterface::AddPrePhysicsStepCallback(SKSE::PluginHandle a_pluginHandle, PrePhysicsStepCallback&& a_prePhysicsStepCallback) noexcept
	{
		if (PrecisionHandler::GetSingleton()->AddPrePhysicsStepCallback(a_pluginHandle, a_prePhysicsStepCallback)) {
			return APIResult::OK;
		} else {
			return APIResult::AlreadyRegistered;
		}
	}

	APIResult PrecisionInterface::AddCollisionFilterComparisonCallback(SKSE::PluginHandle a_pluginHandle, CollisionFilterComparisonCallback&& a_collisionFilterComparisonCallback) noexcept
	{
		if (PrecisionHandler::GetSingleton()->AddCollisionFilterComparisonCallback(a_pluginHandle, a_collisionFilterComparisonCallback)) {
			return APIResult::OK;
		} else {
			return APIResult::AlreadyRegistered;
		}
	}

	APIResult PrecisionInterface::RemovePreHitCallback(SKSE::PluginHandle a_pluginHandle) noexcept
	{
		if (PrecisionHandler::GetSingleton()->RemovePreHitCallback(a_pluginHandle)) {
			return APIResult::OK;
		} else {
			return APIResult::NotRegistered;
		}
	}

	APIResult PrecisionInterface::RemovePostHitCallback(SKSE::PluginHandle a_pluginHandle) noexcept
	{
		if (PrecisionHandler::GetSingleton()->RemovePostHitCallback(a_pluginHandle)) {
			return APIResult::OK;
		} else {
			return APIResult::NotRegistered;
		}
	}

	APIResult PrecisionInterface::RemovePrePhysicsStepCallback(SKSE::PluginHandle a_pluginHandle) noexcept
	{
		if (PrecisionHandler::GetSingleton()->RemovePrePhysicsStepCallback(a_pluginHandle)) {
			return APIResult::OK;
		} else {
			return APIResult::NotRegistered;
		}
	}

	APIResult PrecisionInterface::RemoveCollisionFilterComparisonCallback(SKSE::PluginHandle a_pluginHandle) noexcept
	{
		if (PrecisionHandler::GetSingleton()->RemoveCollisionFilterComparisonCallback(a_pluginHandle)) {
			return APIResult::OK;
		} else {
			return APIResult::NotRegistered;
		}
	}

	float PrecisionInterface::GetAttackCollisionCapsuleLength(RE::ActorHandle a_actorHandle, RequestedAttackCollisionType a_collisionType /*= RequestedAttackCollisionType::Default*/) const noexcept
	{
		return PrecisionHandler::GetSingleton()->GetAttackCollisionReach(a_actorHandle, a_collisionType);
	}

	APIResult PrecisionInterface::AddWeaponWeaponCollisionCallback(SKSE::PluginHandle a_pluginHandle, WeaponCollisionCallback&& a_callback) noexcept
	{
		if (PrecisionHandler::GetSingleton()->AddWeaponWeaponCollisionCallback(a_pluginHandle, a_callback)) {
			return APIResult::OK;
		} else {
			return APIResult::AlreadyRegistered;
		}
	}

	APIResult PrecisionInterface::RemoveWeaponWeaponCollisionCallback(SKSE::PluginHandle a_pluginHandle) noexcept
	{
		if (PrecisionHandler::GetSingleton()->RemoveWeaponWeaponCollisionCallback(a_pluginHandle)) {
			return APIResult::OK;
		} else {
			return APIResult::NotRegistered;
		}
	}

	APIResult PrecisionInterface::AddWeaponProjectileCollisionCallback(SKSE::PluginHandle a_pluginHandle, WeaponCollisionCallback&& a_callback) noexcept
	{
		if (PrecisionHandler::GetSingleton()->AddWeaponProjectileCollisionCallback(a_pluginHandle, a_callback)) {
			return APIResult::OK;
		} else {
			return APIResult::AlreadyRegistered;
		}
	}

	APIResult PrecisionInterface::RemoveWeaponProjectileCollisionCallback(SKSE::PluginHandle a_pluginHandle) noexcept
	{
		if (PrecisionHandler::GetSingleton()->RemoveWeaponProjectileCollisionCallback(a_pluginHandle)) {
			return APIResult::OK;
		} else {
			return APIResult::NotRegistered;
		}
	}

	void PrecisionInterface::ApplyHitImpulse(RE::ActorHandle a_actorHandle, RE::hkpRigidBody* a_rigidBody, const RE::NiPoint3& a_hitVelocity, const RE::hkVector4& a_hitPosition, float a_impulseMult) noexcept
	{
		PrecisionHandler::GetSingleton()->ApplyHitImpulse(a_actorHandle, a_rigidBody, a_hitVelocity, a_hitPosition, a_impulseMult, true, true);
	}

	APIResult PrecisionInterface::AddCollisionFilterSetupCallback(SKSE::PluginHandle a_pluginHandle, CollisionFilterSetupCallback&& a_callback) noexcept
	{
		if (PrecisionHandler::GetSingleton()->AddCollisionFilterSetupCallback(a_pluginHandle, a_callback)) {
			return APIResult::OK;
		} else {
			return APIResult::AlreadyRegistered;
		}
	}

	APIResult PrecisionInterface::RemoveCollisionFilterSetupCallback(SKSE::PluginHandle a_pluginHandle) noexcept
	{
		if (PrecisionHandler::GetSingleton()->RemoveCollisionFilterSetupCallback(a_pluginHandle)) {
			return APIResult::OK;
		} else {
			return APIResult::NotRegistered;
		}
	}

	APIResult PrecisionInterface::AddContactListenerCallback(SKSE::PluginHandle a_pluginHandle, ContactListenerCallback&& a_callback) noexcept
	{
		if (PrecisionHandler::GetSingleton()->AddContactListenerCallback(a_pluginHandle, a_callback)) {
			return APIResult::OK;
		} else {
			return APIResult::AlreadyRegistered;
		}
	}

	APIResult PrecisionInterface::RemoveContactListenerCallback(SKSE::PluginHandle a_pluginHandle) noexcept
	{
		if (PrecisionHandler::GetSingleton()->RemoveContactListenerCallback(a_pluginHandle)) {
			return APIResult::OK;
		} else {
			return APIResult::NotRegistered;
		}
	}

	bool PrecisionInterface::IsActorActive(RE::ActorHandle a_actorHandle) const noexcept
	{
		return PrecisionHandler::IsActorActive(a_actorHandle);
	}

	bool PrecisionInterface::IsActorActiveCollisionGroup(uint16_t a_collisionGroup) const noexcept
	{
		return PrecisionHandler::IsActorActiveCollisionGroup(a_collisionGroup);
	}

	bool PrecisionInterface::IsActorCharacterControllerHittable(RE::ActorHandle a_actorHandle) const noexcept
	{
		return PrecisionHandler::IsActorCharacterControllerHittable(a_actorHandle);
	}

	bool PrecisionInterface::IsCharacterControllerHittable(RE::bhkCharacterController* a_characterController) const noexcept
	{
		return PrecisionHandler::IsCharacterControllerHittable(a_characterController);
	}

	bool PrecisionInterface::IsCharacterControllerHittableCollisionGroup(uint16_t a_collisionGroup) const noexcept
	{
		return PrecisionHandler::IsCharacterControllerHittableCollisionGroup(a_collisionGroup);
	}

	bool PrecisionInterface::ToggleDisableActor(RE::ActorHandle a_actorHandle, bool a_bDisable) noexcept
	{
		return PrecisionHandler::ToggleDisableActor(a_actorHandle, a_bDisable);
	}

	APIResult PrecisionInterface::AddPrecisionLayerSetupCallback(SKSE::PluginHandle a_pluginHandle, PrecisionLayerSetupCallback&& a_callback) noexcept
	{
		if (PrecisionHandler::GetSingleton()->AddPrecisionLayerSetupCallback(a_pluginHandle, a_callback)) {
			return APIResult::OK;
		} else {
			return APIResult::AlreadyRegistered;
		}
	}

	APIResult PrecisionInterface::RemovePrecisionLayerSetupCallback(SKSE::PluginHandle a_pluginHandle) noexcept
	{
		if (PrecisionHandler::GetSingleton()->RemovePrecisionLayerSetupCallback(a_pluginHandle)) {
			return APIResult::OK;
		} else {
			return APIResult::NotRegistered;
		}
	}

	RE::NiAVObject* PrecisionInterface::GetOriginalFromClone(RE::ActorHandle a_actorHandle, RE::NiAVObject* a_node) noexcept
	{
		return PrecisionHandler::GetOriginalFromClone(a_actorHandle, a_node);
	}

	RE::hkpRigidBody* PrecisionInterface::GetOriginalFromClone(RE::ActorHandle a_actorHandle, RE::hkpRigidBody* a_hkpRigidBody) noexcept
	{
		return PrecisionHandler::GetOriginalFromClone(a_actorHandle, a_hkpRigidBody);
	}

	void PrecisionInterface::ApplyHitImpulse2(RE::ActorHandle a_targetActorHandle, RE::ActorHandle a_sourceActorHandle, RE::hkpRigidBody* a_rigidBody, const RE::NiPoint3& a_hitVelocity, const RE::hkVector4& a_hitPosition, float a_impulseMult) noexcept
	{
		bool bAttackerIsPlayer = a_sourceActorHandle.native_handle() == 0x100000;
		PrecisionHandler::GetSingleton()->ApplyHitImpulse(a_targetActorHandle, a_rigidBody, a_hitVelocity, a_hitPosition, a_impulseMult, true, bAttackerIsPlayer);
	}

	APIResult PrecisionInterface::AddExtraParameterName(const std::string_view a_name)
	{
		if (PrecisionHandler::GetSingleton()->AddExtraParameterName(a_name)) {
			return APIResult::OK;
		} else {
			return APIResult::NotRegistered;
		}
	}
}
