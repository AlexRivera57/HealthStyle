#pragma once

using namespace System;

namespace HealthStyleModel{
	[Serializable]
	public ref class Medicines {
		public:
		    property int Id;
		    property String^ Name;
		    property String^ Description;
		    property double Price;
		    property int Stock;	
			property array<Byte>^ Photo;
	};
}
