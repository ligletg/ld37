// Generated by Haxe 3.4.0
#ifndef INCLUDED_openfl__legacy_ui_Mouse
#define INCLUDED_openfl__legacy_ui_Mouse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,ui,Mouse)

namespace openfl{
namespace _legacy{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES Mouse_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Mouse_obj OBJ_;
		Mouse_obj();

	public:
		enum { _hx_ClassId = 0x118c92e1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._legacy.ui.Mouse")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl._legacy.ui.Mouse"); }

		hx::ObjectPtr< Mouse_obj > __new() {
			hx::ObjectPtr< Mouse_obj > __this = new Mouse_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Mouse_obj > __alloc(hx::Ctx *_hx_ctx) {
			Mouse_obj *__this = (Mouse_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Mouse_obj), false, "openfl._legacy.ui.Mouse"));
			*(void **)__this = Mouse_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Mouse_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Mouse","\x05","\x86","\x92","\x9f"); }

		static void hide();
		static ::Dynamic hide_dyn();

		static void show();
		static ::Dynamic show_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace ui

#endif /* INCLUDED_openfl__legacy_ui_Mouse */ 
