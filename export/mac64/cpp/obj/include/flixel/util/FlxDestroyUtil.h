// Generated by Haxe 3.4.0
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#define INCLUDED_flixel_util_FlxDestroyUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,util,FlxDestroyUtil)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)

namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES FlxDestroyUtil_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FlxDestroyUtil_obj OBJ_;
		FlxDestroyUtil_obj();

	public:
		enum { _hx_ClassId = 0x20b40490 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.util.FlxDestroyUtil")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"flixel.util.FlxDestroyUtil"); }

		hx::ObjectPtr< FlxDestroyUtil_obj > __new() {
			hx::ObjectPtr< FlxDestroyUtil_obj > __this = new FlxDestroyUtil_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< FlxDestroyUtil_obj > __alloc(hx::Ctx *_hx_ctx) {
			FlxDestroyUtil_obj *__this = (FlxDestroyUtil_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxDestroyUtil_obj), false, "flixel.util.FlxDestroyUtil"));
			*(void **)__this = FlxDestroyUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxDestroyUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("FlxDestroyUtil","\xea","\x6e","\x48","\x0a"); }

		static  ::Dynamic destroy(::Dynamic object);
		static ::Dynamic destroy_dyn();

		static ::cpp::VirtualArray destroyArray(::cpp::VirtualArray array);
		static ::Dynamic destroyArray_dyn();

		static  ::Dynamic put(::Dynamic object);
		static ::Dynamic put_dyn();

		static ::cpp::VirtualArray putArray(::cpp::VirtualArray array);
		static ::Dynamic putArray_dyn();

		static  ::openfl::_legacy::display::BitmapData dispose( ::openfl::_legacy::display::BitmapData bitmapData);
		static ::Dynamic dispose_dyn();

		static  ::openfl::_legacy::display::BitmapData disposeIfNotEqual( ::openfl::_legacy::display::BitmapData bitmapData,Float width,Float height);
		static ::Dynamic disposeIfNotEqual_dyn();

		static  ::Dynamic removeChild( ::openfl::_legacy::display::DisplayObjectContainer parent, ::Dynamic child);
		static ::Dynamic removeChild_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxDestroyUtil */ 
