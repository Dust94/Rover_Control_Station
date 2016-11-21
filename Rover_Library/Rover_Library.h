// Rover_Library.h

#pragma once

using namespace System;

namespace Rover_Library {

	public ref class Serial{
		public:
			void Read(void);
	};

	public ref class Motor {
		public:
			float Kp;
			float Ki;
			float Kd;
			float velocidad;
			char sentido;

	};
}
