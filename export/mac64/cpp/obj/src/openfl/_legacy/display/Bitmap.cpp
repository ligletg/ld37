// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Bitmap
#include <openfl/_legacy/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_PixelSnapping
#include <openfl/_legacy/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7fb4d788c8398f85_16_new,"openfl._legacy.display.Bitmap","new",0x890ca811,"openfl._legacy.display.Bitmap.new","openfl/_legacy/display/Bitmap.hx",16,0x223e911c)
HX_DEFINE_STACK_FRAME(_hx_pos_7fb4d788c8398f85_38___rebuild,"openfl._legacy.display.Bitmap","__rebuild",0x4c9eb1ec,"openfl._legacy.display.Bitmap.__rebuild","openfl/_legacy/display/Bitmap.hx",38,0x223e911c)
HX_DEFINE_STACK_FRAME(_hx_pos_7fb4d788c8398f85_63_set_bitmapData,"openfl._legacy.display.Bitmap","set_bitmapData",0x46897a65,"openfl._legacy.display.Bitmap.set_bitmapData","openfl/_legacy/display/Bitmap.hx",63,0x223e911c)
HX_DEFINE_STACK_FRAME(_hx_pos_7fb4d788c8398f85_76_get_pixelSnapping,"openfl._legacy.display.Bitmap","get_pixelSnapping",0x6eee452a,"openfl._legacy.display.Bitmap.get_pixelSnapping","openfl/_legacy/display/Bitmap.hx",76,0x223e911c)
HX_DEFINE_STACK_FRAME(_hx_pos_7fb4d788c8398f85_81_set_pixelSnapping,"openfl._legacy.display.Bitmap","set_pixelSnapping",0x925c1d36,"openfl._legacy.display.Bitmap.set_pixelSnapping","openfl/_legacy/display/Bitmap.hx",81,0x223e911c)
HX_DEFINE_STACK_FRAME(_hx_pos_7fb4d788c8398f85_98_set_smoothing,"openfl._legacy.display.Bitmap","set_smoothing",0x20df4a48,"openfl._legacy.display.Bitmap.set_smoothing","openfl/_legacy/display/Bitmap.hx",98,0x223e911c)
HX_DEFINE_STACK_FRAME(_hx_pos_7fb4d788c8398f85_115_boot,"openfl._legacy.display.Bitmap","boot",0x5a1f6761,"openfl._legacy.display.Bitmap.boot","openfl/_legacy/display/Bitmap.hx",115,0x223e911c)
HX_DEFINE_STACK_FRAME(_hx_pos_7fb4d788c8398f85_116_boot,"openfl._legacy.display.Bitmap","boot",0x5a1f6761,"openfl._legacy.display.Bitmap.boot","openfl/_legacy/display/Bitmap.hx",116,0x223e911c)
namespace openfl{
namespace _legacy{
namespace display{

void Bitmap_obj::__construct( ::openfl::_legacy::display::BitmapData bitmapData, ::openfl::_legacy::display::PixelSnapping pixelSnapping,hx::Null< bool >  __o_smoothing){
bool smoothing = __o_smoothing.Default(false);
            	HX_STACKFRAME(&_hx_pos_7fb4d788c8398f85_16_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(bitmapData,"bitmapData")
            	HX_STACK_ARG(pixelSnapping,"pixelSnapping")
            	HX_STACK_ARG(smoothing,"smoothing")
HXLINE(  18)		super::__construct(::openfl::_legacy::display::DisplayObject_obj::lime_create_display_object(),HX_("Bitmap",0f,84,a0,25));
HXLINE(  20)		 ::openfl::_legacy::display::PixelSnapping _hx_tmp;
HXDLIN(  20)		if (hx::IsNull( pixelSnapping )) {
HXLINE(  20)			_hx_tmp = ::openfl::_legacy::display::PixelSnapping_obj::AUTO_dyn();
            		}
            		else {
HXLINE(  20)			_hx_tmp = pixelSnapping;
            		}
HXDLIN(  20)		this->set_pixelSnapping(_hx_tmp);
HXLINE(  21)		this->set_smoothing(smoothing);
HXLINE(  23)		if (hx::IsNotNull( bitmapData )) {
HXLINE(  25)			this->set_bitmapData(bitmapData);
            		}
            		else {
HXLINE(  27)			if (hx::IsNotNull( this->bitmapData )) {
HXLINE(  29)				this->_hx___rebuild();
            			}
            		}
            	}

Dynamic Bitmap_obj::__CreateEmpty() { return new Bitmap_obj; }

void *Bitmap_obj::_hx_vtable = 0;

Dynamic Bitmap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Bitmap_obj > _hx_result = new Bitmap_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Bitmap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3d2d7617) {
		if (inClassId<=(int)0x25b00754) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x25b00754;
		} else {
			return inClassId==(int)0x3d2d7617;
		}
	} else {
		return inClassId==(int)0x4bff01b9;
	}
}

void Bitmap_obj::_hx___rebuild(){
            	HX_STACKFRAME(&_hx_pos_7fb4d788c8398f85_38___rebuild)
            	HX_STACK_THIS(this)
HXLINE(  38)		if (hx::IsNotNull( this->_hx___handle )) {
HXLINE(  40)			HX_VARI(  ::openfl::_legacy::display::Graphics,gfx) = this->get_graphics();
HXLINE(  41)			gfx->clear();
HXLINE(  43)			if (hx::IsNotNull( this->bitmapData )) {
HXLINE(  45)				gfx->beginBitmapFill(this->bitmapData,null(),false,this->smoothing);
HXLINE(  46)				int _hx_tmp = this->bitmapData->get_width();
HXDLIN(  46)				gfx->drawRect((int)0,(int)0,_hx_tmp,this->bitmapData->get_height());
HXLINE(  47)				gfx->endFill();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bitmap_obj,_hx___rebuild,(void))

 ::openfl::_legacy::display::BitmapData Bitmap_obj::set_bitmapData( ::openfl::_legacy::display::BitmapData value){
            	HX_STACKFRAME(&_hx_pos_7fb4d788c8398f85_63_set_bitmapData)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE(  65)		this->bitmapData = value;
HXLINE(  66)		this->_hx___rebuild();
HXLINE(  68)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bitmap_obj,set_bitmapData,return )

 ::openfl::_legacy::display::PixelSnapping Bitmap_obj::get_pixelSnapping(){
            	HX_STACKFRAME(&_hx_pos_7fb4d788c8398f85_76_get_pixelSnapping)
            	HX_STACK_THIS(this)
HXLINE(  76)		return ::Type_obj::createEnumIndex(hx::ClassOf< ::openfl::_legacy::display::PixelSnapping >(),( (int)(::openfl::_legacy::display::Bitmap_obj::lime_display_object_get_pixel_snapping(this->_hx___handle)) ),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bitmap_obj,get_pixelSnapping,return )

 ::openfl::_legacy::display::PixelSnapping Bitmap_obj::set_pixelSnapping( ::openfl::_legacy::display::PixelSnapping value){
            	HX_STACKFRAME(&_hx_pos_7fb4d788c8398f85_81_set_pixelSnapping)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE(  83)		if (hx::IsNull( value )) {
HXLINE(  85)			::openfl::_legacy::display::Bitmap_obj::lime_display_object_set_pixel_snapping(this->_hx___handle,(int)0);
            		}
            		else {
HXLINE(  89)			 ::Dynamic _hx_tmp = this->_hx___handle;
HXDLIN(  89)			int _hx_tmp1 = _hx_getEnumValueIndex(value);
HXDLIN(  89)			::openfl::_legacy::display::Bitmap_obj::lime_display_object_set_pixel_snapping(_hx_tmp,_hx_tmp1);
            		}
HXLINE(  93)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bitmap_obj,set_pixelSnapping,return )

bool Bitmap_obj::set_smoothing(bool value){
            	HX_STACKFRAME(&_hx_pos_7fb4d788c8398f85_98_set_smoothing)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 100)		this->smoothing = value;
HXLINE( 101)		this->_hx___rebuild();
HXLINE( 103)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bitmap_obj,set_smoothing,return )

 ::Dynamic Bitmap_obj::lime_display_object_get_pixel_snapping;

 ::Dynamic Bitmap_obj::lime_display_object_set_pixel_snapping;


hx::ObjectPtr< Bitmap_obj > Bitmap_obj::__new( ::openfl::_legacy::display::BitmapData bitmapData, ::openfl::_legacy::display::PixelSnapping pixelSnapping,hx::Null< bool >  __o_smoothing) {
	hx::ObjectPtr< Bitmap_obj > __this = new Bitmap_obj();
	__this->__construct(bitmapData,pixelSnapping,__o_smoothing);
	return __this;
}

hx::ObjectPtr< Bitmap_obj > Bitmap_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::_legacy::display::BitmapData bitmapData, ::openfl::_legacy::display::PixelSnapping pixelSnapping,hx::Null< bool >  __o_smoothing) {
	Bitmap_obj *__this = (Bitmap_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Bitmap_obj), true, "openfl._legacy.display.Bitmap"));
	*(void **)__this = Bitmap_obj::_hx_vtable;
	__this->__construct(bitmapData,pixelSnapping,__o_smoothing);
	return __this;
}

Bitmap_obj::Bitmap_obj()
{
}

void Bitmap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bitmap);
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	 ::openfl::_legacy::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bitmap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(smoothing,"smoothing");
	 ::openfl::_legacy::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Bitmap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return hx::Val( smoothing); }
		if (HX_FIELD_EQ(inName,"__rebuild") ) { return hx::Val( _hx___rebuild_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return hx::Val( bitmapData); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_pixelSnapping()); }
		if (HX_FIELD_EQ(inName,"set_smoothing") ) { return hx::Val( set_smoothing_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_bitmapData") ) { return hx::Val( set_bitmapData_dyn()); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_pixelSnapping") ) { return hx::Val( get_pixelSnapping_dyn()); }
		if (HX_FIELD_EQ(inName,"set_pixelSnapping") ) { return hx::Val( set_pixelSnapping_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool Bitmap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 38:
		if (HX_FIELD_EQ(inName,"lime_display_object_get_pixel_snapping") ) { outValue = lime_display_object_get_pixel_snapping; return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_pixel_snapping") ) { outValue = lime_display_object_set_pixel_snapping; return true; }
	}
	return false;
}

hx::Val Bitmap_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_smoothing(inValue) );smoothing=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_bitmapData(inValue) );bitmapData=inValue.Cast<  ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_pixelSnapping(inValue) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Bitmap_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 38:
		if (HX_FIELD_EQ(inName,"lime_display_object_get_pixel_snapping") ) { lime_display_object_get_pixel_snapping=ioValue.Cast<  ::Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_pixel_snapping") ) { lime_display_object_set_pixel_snapping=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

void Bitmap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"));
	outFields->push(HX_HCSTRING("pixelSnapping","\x62","\xae","\xa1","\xb8"));
	outFields->push(HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Bitmap_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(Bitmap_obj,bitmapData),HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33")},
	{hx::fsBool,(int)offsetof(Bitmap_obj,smoothing),HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Bitmap_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Bitmap_obj::lime_display_object_get_pixel_snapping,HX_HCSTRING("lime_display_object_get_pixel_snapping","\xf7","\x52","\xe4","\xc6")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Bitmap_obj::lime_display_object_set_pixel_snapping,HX_HCSTRING("lime_display_object_set_pixel_snapping","\x6b","\x85","\x93","\xa3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Bitmap_obj_sMemberFields[] = {
	HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"),
	HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"),
	HX_HCSTRING("__rebuild","\x7b","\x7f","\xd3","\x22"),
	HX_HCSTRING("set_bitmapData","\x76","\x26","\xd6","\xc9"),
	HX_HCSTRING("get_pixelSnapping","\xb9","\xb9","\x11","\xbf"),
	HX_HCSTRING("set_pixelSnapping","\xc5","\x91","\x7f","\xe2"),
	HX_HCSTRING("set_smoothing","\x57","\x8b","\x4b","\x9c"),
	::String(null()) };

static void Bitmap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Bitmap_obj::lime_display_object_get_pixel_snapping,"lime_display_object_get_pixel_snapping");
	HX_MARK_MEMBER_NAME(Bitmap_obj::lime_display_object_set_pixel_snapping,"lime_display_object_set_pixel_snapping");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Bitmap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Bitmap_obj::lime_display_object_get_pixel_snapping,"lime_display_object_get_pixel_snapping");
	HX_VISIT_MEMBER_NAME(Bitmap_obj::lime_display_object_set_pixel_snapping,"lime_display_object_set_pixel_snapping");
};

#endif

hx::Class Bitmap_obj::__mClass;

static ::String Bitmap_obj_sStaticFields[] = {
	HX_HCSTRING("lime_display_object_get_pixel_snapping","\xf7","\x52","\xe4","\xc6"),
	HX_HCSTRING("lime_display_object_set_pixel_snapping","\x6b","\x85","\x93","\xa3"),
	::String(null())
};

void Bitmap_obj::__register()
{
	hx::Object *dummy = new Bitmap_obj;
	Bitmap_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.display.Bitmap","\x9f","\x4b","\x99","\x8f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Bitmap_obj::__GetStatic;
	__mClass->mSetStaticField = &Bitmap_obj::__SetStatic;
	__mClass->mMarkFunc = Bitmap_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Bitmap_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Bitmap_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Bitmap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Bitmap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Bitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Bitmap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Bitmap_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7fb4d788c8398f85_115_boot)
HXLINE( 115)		lime_display_object_get_pixel_snapping = ::openfl::_legacy::Lib_obj::load(HX_("lime-legacy",c1,7f,b9,87),HX_("lime_legacy_display_object_get_pixel_snapping",d5,f8,a9,59),(int)1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_7fb4d788c8398f85_116_boot)
HXLINE( 116)		lime_display_object_set_pixel_snapping = ::openfl::_legacy::Lib_obj::load(HX_("lime-legacy",c1,7f,b9,87),HX_("lime_legacy_display_object_set_pixel_snapping",49,2b,59,36),(int)2);
            	}
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace display
