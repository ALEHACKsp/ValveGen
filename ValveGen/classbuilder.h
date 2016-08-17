

#pragma once

#include "required.h"
#include "singleton.h"
#include "classnode.h"
#include "client.h"

namespace valvegen
{
	class ClassBuilder : public Singleton<ClassBuilder>
	{
		friend class Singleton<ClassBuilder>;

	private:
		ClassBuilder();

	public:
		void Cleanup();
		bool CreateClasses();
		void CreateNodes(RecvTable* head, ClassNode* parent = nullptr);
		ClassNode* CreateNode(RecvTable* instance, ClassNode* parent = nullptr);
		ClassNode* FindNode(std::string name);
		void CreateSDK();
		void AddElement(RecvProp* prop, ClassNode* current_node);

	private:
		std::vector<ClassNode*> nodes_;
	};
}
