#pragma once

#include "Core.h"

namespace Maple {

	class MAPLE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}