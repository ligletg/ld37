// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dae410633c8f1026_18_new,"openfl._legacy.display.InteractiveObject","new",0xc8f78603,"openfl._legacy.display.InteractiveObject.new","openfl/_legacy/display/InteractiveObject.hx",18,0x78315950)
HX_DEFINE_STACK_FRAME(_hx_pos_dae410633c8f1026_30___dismissSoftKeyboard,"openfl._legacy.display.InteractiveObject","__dismissSoftKeyboard",0x4413ed5e,"openfl._legacy.display.InteractiveObject.__dismissSoftKeyboard","openfl/_legacy/display/InteractiveObject.hx",30,0x78315950)
HX_DEFINE_STACK_FRAME(_hx_pos_dae410633c8f1026_37_requestSoftKeyboard,"openfl._legacy.display.InteractiveObject","requestSoftKeyboard",0x18066143,"openfl._legacy.display.InteractiveObject.requestSoftKeyboard","openfl/_legacy/display/InteractiveObject.hx",37,0x78315950)
HX_DEFINE_STACK_FRAME(_hx_pos_dae410633c8f1026_44___asInteractiveObject,"openfl._legacy.display.InteractiveObject","__asInteractiveObject",0x82877c32,"openfl._legacy.display.InteractiveObject.__asInteractiveObject","openfl/_legacy/display/InteractiveObject.hx",44,0x78315950)
HX_DEFINE_STACK_FRAME(_hx_pos_dae410633c8f1026_56_get_mouseEnabled,"openfl._legacy.display.InteractiveObject","get_mouseEnabled",0x324081e2,"openfl._legacy.display.InteractiveObject.get_mouseEnabled","openfl/_legacy/display/InteractiveObject.hx",56,0x78315950)
HX_DEFINE_STACK_FRAME(_hx_pos_dae410633c8f1026_57_set_mouseEnabled,"openfl._legacy.display.InteractiveObject","set_mouseEnabled",0x88826f56,"openfl._legacy.display.InteractiveObject.set_mouseEnabled","openfl/_legacy/display/InteractiveObject.hx",57,0x78315950)
HX_DEFINE_STACK_FRAME(_hx_pos_dae410633c8f1026_66_set_moveForSoftKeyboard,"openfl._legacy.display.InteractiveObject","set_moveForSoftKeyboard",0xd4d7550f,"openfl._legacy.display.InteractiveObject.set_moveForSoftKeyboard","openfl/_legacy/display/InteractiveObject.hx",66,0x78315950)
HX_DEFINE_STACK_FRAME(_hx_pos_dae410633c8f1026_76_get_moveForSoftKeyboard,"openfl._legacy.display.InteractiveObject","get_moveForSoftKeyboard",0xd275ec03,"openfl._legacy.display.InteractiveObject.get_moveForSoftKeyboard","openfl/_legacy/display/InteractiveObject.hx",76,0x78315950)
HX_DEFINE_STACK_FRAME(_hx_pos_dae410633c8f1026_81_set_needsSoftKeyboard,"openfl._legacy.display.InteractiveObject","set_needsSoftKeyboard",0xa062f5f4,"openfl._legacy.display.InteractiveObject.set_needsSoftKeyboard","openfl/_legacy/display/InteractiveObject.hx",81,0x78315950)
HX_DEFINE_STACK_FRAME(_hx_pos_dae410633c8f1026_91_get_needsSoftKeyboard,"openfl._legacy.display.InteractiveObject","get_needsSoftKeyboard",0x4c5a27e8,"openfl._legacy.display.InteractiveObject.get_needsSoftKeyboard","openfl/_legacy/display/InteractiveObject.hx",91,0x78315950)
HX_DEFINE_STACK_FRAME(_hx_pos_dae410633c8f1026_103_boot,"openfl._legacy.display.InteractiveObject","boot",0x07b6bd2f,"openfl._legacy.display.InteractiveObject.boot","openfl/_legacy/display/InteractiveObject.hx",103,0x78315950)
HX_DEFINE_STACK_FRAME(_hx_pos_dae410633c8f1026_104_boot,"openfl._legacy.display.InteractiveObject","boot",0x07b6bd2f,"openfl._legacy.display.InteractiveObject.boot","openfl/_legacy/display/InteractiveObject.hx",104,0x78315950)
HX_DEFINE_STACK_FRAME(_hx_pos_dae410633c8f1026_105_boot,"openfl._legacy.display.InteractiveObject","boot",0x07b6bd2f,"openfl._legacy.display.InteractiveObject.boot","openfl/_legacy/display/InteractiveObject.hx",105,0x78315950)
HX_DEFINE_STACK_FRAME(_hx_pos_dae410633c8f1026_106_boot,"openfl._legacy.display.InteractiveObject","boot",0x07b6bd2f,"openfl._legacy.display.InteractiveObject.boot","openfl/_legacy/display/InteractiveObject.hx",106,0x78315950)
HX_DEFINE_STACK_FRAME(_hx_pos_dae410633c8f1026_107_boot,"openfl._legacy.display.InteractiveObject","boot",0x07b6bd2f,"openfl._legacy.display.InteractiveObject.boot","openfl/_legacy/display/InteractiveObject.hx",107,0x78315950)
HX_DEFINE_STACK_FRAME(_hx_pos_dae410633c8f1026_108_boot,"openfl._legacy.display.InteractiveObject","boot",0x07b6bd2f,"openfl._legacy.display.InteractiveObject.boot","openfl/_legacy/display/InteractiveObject.hx",108,0x78315950)
HX_DEFINE_STACK_FRAME(_hx_pos_dae410633c8f1026_109_boot,"openfl._legacy.display.InteractiveObject","boot",0x07b6bd2f,"openfl._legacy.display.InteractiveObject.boot","openfl/_legacy/display/InteractiveObject.hx",109,0x78315950)
namespace openfl{
namespace _legacy{
namespace display{

void InteractiveObject_obj::__construct( ::Dynamic handle,::String type){
            	HX_STACKFRAME(&_hx_pos_dae410633c8f1026_18_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(handle,"handle")
            	HX_STACK_ARG(type,"type")
HXLINE(  20)		this->doubleClickEnabled = false;
HXLINE(  21)		this->_hx___mouseEnabled = true;
HXLINE(  23)		super::__construct(handle,type);
            	}

Dynamic InteractiveObject_obj::__CreateEmpty() { return new InteractiveObject_obj; }

void *InteractiveObject_obj::_hx_vtable = 0;

Dynamic InteractiveObject_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< InteractiveObject_obj > _hx_result = new InteractiveObject_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool InteractiveObject_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3d2d7617) {
		if (inClassId<=(int)0x25b00754) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x25b00754;
		} else {
			return inClassId==(int)0x3d2d7617;
		}
	} else {
		return inClassId==(int)0x5fcdb6d3;
	}
}

bool InteractiveObject_obj::_hx___dismissSoftKeyboard(){
            	HX_STACKFRAME(&_hx_pos_dae410633c8f1026_30___dismissSoftKeyboard)
            	HX_STACK_THIS(this)
HXLINE(  30)		return ::openfl::_legacy::display::InteractiveObject_obj::lime_display_object_dismiss_soft_keyboard(this->_hx___handle);
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveObject_obj,_hx___dismissSoftKeyboard,return )

bool InteractiveObject_obj::requestSoftKeyboard(){
            	HX_STACKFRAME(&_hx_pos_dae410633c8f1026_37_requestSoftKeyboard)
            	HX_STACK_THIS(this)
HXLINE(  37)		return ::openfl::_legacy::display::InteractiveObject_obj::lime_display_object_request_soft_keyboard(this->_hx___handle);
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveObject_obj,requestSoftKeyboard,return )

 ::openfl::_legacy::display::InteractiveObject InteractiveObject_obj::_hx___asInteractiveObject(){
            	HX_STACKFRAME(&_hx_pos_dae410633c8f1026_44___asInteractiveObject)
            	HX_STACK_THIS(this)
HXLINE(  44)		return hx::ObjectPtr<OBJ_>(this);
            	}


bool InteractiveObject_obj::get_mouseEnabled(){
            	HX_STACKFRAME(&_hx_pos_dae410633c8f1026_56_get_mouseEnabled)
            	HX_STACK_THIS(this)
HXLINE(  56)		return this->_hx___mouseEnabled;
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveObject_obj,get_mouseEnabled,return )

bool InteractiveObject_obj::set_mouseEnabled(bool value){
            	HX_STACKFRAME(&_hx_pos_dae410633c8f1026_57_set_mouseEnabled)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE(  59)		this->_hx___mouseEnabled = value;
HXLINE(  60)		::openfl::_legacy::display::InteractiveObject_obj::lime_display_object_set_mouse_enabled(this->_hx___handle,value);
HXLINE(  61)		return this->_hx___mouseEnabled;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InteractiveObject_obj,set_mouseEnabled,return )

bool InteractiveObject_obj::set_moveForSoftKeyboard(bool value){
            	HX_STACKFRAME(&_hx_pos_dae410633c8f1026_66_set_moveForSoftKeyboard)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE(  68)		::openfl::_legacy::display::InteractiveObject_obj::lime_display_object_set_moves_for_soft_keyboard(this->_hx___handle,value);
HXLINE(  69)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InteractiveObject_obj,set_moveForSoftKeyboard,return )

bool InteractiveObject_obj::get_moveForSoftKeyboard(){
            	HX_STACKFRAME(&_hx_pos_dae410633c8f1026_76_get_moveForSoftKeyboard)
            	HX_STACK_THIS(this)
HXLINE(  76)		return ::openfl::_legacy::display::InteractiveObject_obj::lime_display_object_get_moves_for_soft_keyboard(this->_hx___handle);
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveObject_obj,get_moveForSoftKeyboard,return )

bool InteractiveObject_obj::set_needsSoftKeyboard(bool value){
            	HX_STACKFRAME(&_hx_pos_dae410633c8f1026_81_set_needsSoftKeyboard)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE(  83)		::openfl::_legacy::display::InteractiveObject_obj::lime_display_object_set_needs_soft_keyboard(this->_hx___handle,value);
HXLINE(  84)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InteractiveObject_obj,set_needsSoftKeyboard,return )

bool InteractiveObject_obj::get_needsSoftKeyboard(){
            	HX_STACKFRAME(&_hx_pos_dae410633c8f1026_91_get_needsSoftKeyboard)
            	HX_STACK_THIS(this)
HXLINE(  91)		return ::openfl::_legacy::display::InteractiveObject_obj::lime_display_object_get_needs_soft_keyboard(this->_hx___handle);
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveObject_obj,get_needsSoftKeyboard,return )

 ::Dynamic InteractiveObject_obj::lime_display_object_set_mouse_enabled;

 ::Dynamic InteractiveObject_obj::lime_display_object_set_needs_soft_keyboard;

 ::Dynamic InteractiveObject_obj::lime_display_object_get_needs_soft_keyboard;

 ::Dynamic InteractiveObject_obj::lime_display_object_set_moves_for_soft_keyboard;

 ::Dynamic InteractiveObject_obj::lime_display_object_get_moves_for_soft_keyboard;

 ::Dynamic InteractiveObject_obj::lime_display_object_dismiss_soft_keyboard;

 ::Dynamic InteractiveObject_obj::lime_display_object_request_soft_keyboard;


hx::ObjectPtr< InteractiveObject_obj > InteractiveObject_obj::__new( ::Dynamic handle,::String type) {
	hx::ObjectPtr< InteractiveObject_obj > __this = new InteractiveObject_obj();
	__this->__construct(handle,type);
	return __this;
}

hx::ObjectPtr< InteractiveObject_obj > InteractiveObject_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic handle,::String type) {
	InteractiveObject_obj *__this = (InteractiveObject_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(InteractiveObject_obj), true, "openfl._legacy.display.InteractiveObject"));
	*(void **)__this = InteractiveObject_obj::_hx_vtable;
	__this->__construct(handle,type);
	return __this;
}

InteractiveObject_obj::InteractiveObject_obj()
{
}

hx::Val InteractiveObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"mouseEnabled") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_mouseEnabled()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__mouseEnabled") ) { return hx::Val( _hx___mouseEnabled); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_mouseEnabled") ) { return hx::Val( get_mouseEnabled_dyn()); }
		if (HX_FIELD_EQ(inName,"set_mouseEnabled") ) { return hx::Val( set_mouseEnabled_dyn()); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"needsSoftKeyboard") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_needsSoftKeyboard()); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"doubleClickEnabled") ) { return hx::Val( doubleClickEnabled); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"moveForSoftKeyboard") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_moveForSoftKeyboard()); }
		if (HX_FIELD_EQ(inName,"requestSoftKeyboard") ) { return hx::Val( requestSoftKeyboard_dyn()); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__dismissSoftKeyboard") ) { return hx::Val( _hx___dismissSoftKeyboard_dyn()); }
		if (HX_FIELD_EQ(inName,"__asInteractiveObject") ) { return hx::Val( _hx___asInteractiveObject_dyn()); }
		if (HX_FIELD_EQ(inName,"set_needsSoftKeyboard") ) { return hx::Val( set_needsSoftKeyboard_dyn()); }
		if (HX_FIELD_EQ(inName,"get_needsSoftKeyboard") ) { return hx::Val( get_needsSoftKeyboard_dyn()); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"set_moveForSoftKeyboard") ) { return hx::Val( set_moveForSoftKeyboard_dyn()); }
		if (HX_FIELD_EQ(inName,"get_moveForSoftKeyboard") ) { return hx::Val( get_moveForSoftKeyboard_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool InteractiveObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 37:
		if (HX_FIELD_EQ(inName,"lime_display_object_set_mouse_enabled") ) { outValue = lime_display_object_set_mouse_enabled; return true; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"lime_display_object_dismiss_soft_keyboard") ) { outValue = lime_display_object_dismiss_soft_keyboard; return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_request_soft_keyboard") ) { outValue = lime_display_object_request_soft_keyboard; return true; }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"lime_display_object_set_needs_soft_keyboard") ) { outValue = lime_display_object_set_needs_soft_keyboard; return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_needs_soft_keyboard") ) { outValue = lime_display_object_get_needs_soft_keyboard; return true; }
		break;
	case 47:
		if (HX_FIELD_EQ(inName,"lime_display_object_set_moves_for_soft_keyboard") ) { outValue = lime_display_object_set_moves_for_soft_keyboard; return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_moves_for_soft_keyboard") ) { outValue = lime_display_object_get_moves_for_soft_keyboard; return true; }
	}
	return false;
}

hx::Val InteractiveObject_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"mouseEnabled") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_mouseEnabled(inValue) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__mouseEnabled") ) { _hx___mouseEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"needsSoftKeyboard") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_needsSoftKeyboard(inValue) ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"doubleClickEnabled") ) { doubleClickEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"moveForSoftKeyboard") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_moveForSoftKeyboard(inValue) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool InteractiveObject_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 37:
		if (HX_FIELD_EQ(inName,"lime_display_object_set_mouse_enabled") ) { lime_display_object_set_mouse_enabled=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"lime_display_object_dismiss_soft_keyboard") ) { lime_display_object_dismiss_soft_keyboard=ioValue.Cast<  ::Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_request_soft_keyboard") ) { lime_display_object_request_soft_keyboard=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"lime_display_object_set_needs_soft_keyboard") ) { lime_display_object_set_needs_soft_keyboard=ioValue.Cast<  ::Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_needs_soft_keyboard") ) { lime_display_object_get_needs_soft_keyboard=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 47:
		if (HX_FIELD_EQ(inName,"lime_display_object_set_moves_for_soft_keyboard") ) { lime_display_object_set_moves_for_soft_keyboard=ioValue.Cast<  ::Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_moves_for_soft_keyboard") ) { lime_display_object_get_moves_for_soft_keyboard=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

void InteractiveObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("doubleClickEnabled","\xca","\x95","\x95","\xe6"));
	outFields->push(HX_HCSTRING("mouseEnabled","\xdc","\x54","\xd6","\x5f"));
	outFields->push(HX_HCSTRING("moveForSoftKeyboard","\x49","\xcc","\x61","\xee"));
	outFields->push(HX_HCSTRING("needsSoftKeyboard","\xae","\x4a","\xa3","\xa9"));
	outFields->push(HX_HCSTRING("__mouseEnabled","\xfc","\xd7","\x96","\x80"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo InteractiveObject_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(InteractiveObject_obj,doubleClickEnabled),HX_HCSTRING("doubleClickEnabled","\xca","\x95","\x95","\xe6")},
	{hx::fsBool,(int)offsetof(InteractiveObject_obj,_hx___mouseEnabled),HX_HCSTRING("__mouseEnabled","\xfc","\xd7","\x96","\x80")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo InteractiveObject_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &InteractiveObject_obj::lime_display_object_set_mouse_enabled,HX_HCSTRING("lime_display_object_set_mouse_enabled","\x51","\x06","\xbb","\x73")},
	{hx::fsObject /*Dynamic*/ ,(void *) &InteractiveObject_obj::lime_display_object_set_needs_soft_keyboard,HX_HCSTRING("lime_display_object_set_needs_soft_keyboard","\xe4","\xda","\x5f","\xb1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &InteractiveObject_obj::lime_display_object_get_needs_soft_keyboard,HX_HCSTRING("lime_display_object_get_needs_soft_keyboard","\xd8","\x71","\xfe","\xae")},
	{hx::fsObject /*Dynamic*/ ,(void *) &InteractiveObject_obj::lime_display_object_set_moves_for_soft_keyboard,HX_HCSTRING("lime_display_object_set_moves_for_soft_keyboard","\x13","\x26","\x0a","\x9b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &InteractiveObject_obj::lime_display_object_get_moves_for_soft_keyboard,HX_HCSTRING("lime_display_object_get_moves_for_soft_keyboard","\x07","\x47","\x71","\x58")},
	{hx::fsObject /*Dynamic*/ ,(void *) &InteractiveObject_obj::lime_display_object_dismiss_soft_keyboard,HX_HCSTRING("lime_display_object_dismiss_soft_keyboard","\x2e","\xc8","\x72","\x21")},
	{hx::fsObject /*Dynamic*/ ,(void *) &InteractiveObject_obj::lime_display_object_request_soft_keyboard,HX_HCSTRING("lime_display_object_request_soft_keyboard","\xf3","\x76","\x71","\x51")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String InteractiveObject_obj_sMemberFields[] = {
	HX_HCSTRING("doubleClickEnabled","\xca","\x95","\x95","\xe6"),
	HX_HCSTRING("__mouseEnabled","\xfc","\xd7","\x96","\x80"),
	HX_HCSTRING("__dismissSoftKeyboard","\xfb","\x12","\x0b","\x20"),
	HX_HCSTRING("requestSoftKeyboard","\xa0","\xf5","\xa9","\xd4"),
	HX_HCSTRING("__asInteractiveObject","\xcf","\xa1","\x7e","\x5e"),
	HX_HCSTRING("get_mouseEnabled","\x65","\x41","\x75","\x64"),
	HX_HCSTRING("set_mouseEnabled","\xd9","\x2e","\xb7","\xba"),
	HX_HCSTRING("set_moveForSoftKeyboard","\xec","\xdb","\x18","\xf9"),
	HX_HCSTRING("get_moveForSoftKeyboard","\xe0","\x72","\xb7","\xf6"),
	HX_HCSTRING("set_needsSoftKeyboard","\x91","\x1b","\x5a","\x7c"),
	HX_HCSTRING("get_needsSoftKeyboard","\x85","\x4d","\x51","\x28"),
	::String(null()) };

static void InteractiveObject_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InteractiveObject_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(InteractiveObject_obj::lime_display_object_set_mouse_enabled,"lime_display_object_set_mouse_enabled");
	HX_MARK_MEMBER_NAME(InteractiveObject_obj::lime_display_object_set_needs_soft_keyboard,"lime_display_object_set_needs_soft_keyboard");
	HX_MARK_MEMBER_NAME(InteractiveObject_obj::lime_display_object_get_needs_soft_keyboard,"lime_display_object_get_needs_soft_keyboard");
	HX_MARK_MEMBER_NAME(InteractiveObject_obj::lime_display_object_set_moves_for_soft_keyboard,"lime_display_object_set_moves_for_soft_keyboard");
	HX_MARK_MEMBER_NAME(InteractiveObject_obj::lime_display_object_get_moves_for_soft_keyboard,"lime_display_object_get_moves_for_soft_keyboard");
	HX_MARK_MEMBER_NAME(InteractiveObject_obj::lime_display_object_dismiss_soft_keyboard,"lime_display_object_dismiss_soft_keyboard");
	HX_MARK_MEMBER_NAME(InteractiveObject_obj::lime_display_object_request_soft_keyboard,"lime_display_object_request_soft_keyboard");
};

#ifdef HXCPP_VISIT_ALLOCS
static void InteractiveObject_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InteractiveObject_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(InteractiveObject_obj::lime_display_object_set_mouse_enabled,"lime_display_object_set_mouse_enabled");
	HX_VISIT_MEMBER_NAME(InteractiveObject_obj::lime_display_object_set_needs_soft_keyboard,"lime_display_object_set_needs_soft_keyboard");
	HX_VISIT_MEMBER_NAME(InteractiveObject_obj::lime_display_object_get_needs_soft_keyboard,"lime_display_object_get_needs_soft_keyboard");
	HX_VISIT_MEMBER_NAME(InteractiveObject_obj::lime_display_object_set_moves_for_soft_keyboard,"lime_display_object_set_moves_for_soft_keyboard");
	HX_VISIT_MEMBER_NAME(InteractiveObject_obj::lime_display_object_get_moves_for_soft_keyboard,"lime_display_object_get_moves_for_soft_keyboard");
	HX_VISIT_MEMBER_NAME(InteractiveObject_obj::lime_display_object_dismiss_soft_keyboard,"lime_display_object_dismiss_soft_keyboard");
	HX_VISIT_MEMBER_NAME(InteractiveObject_obj::lime_display_object_request_soft_keyboard,"lime_display_object_request_soft_keyboard");
};

#endif

hx::Class InteractiveObject_obj::__mClass;

static ::String InteractiveObject_obj_sStaticFields[] = {
	HX_HCSTRING("lime_display_object_set_mouse_enabled","\x51","\x06","\xbb","\x73"),
	HX_HCSTRING("lime_display_object_set_needs_soft_keyboard","\xe4","\xda","\x5f","\xb1"),
	HX_HCSTRING("lime_display_object_get_needs_soft_keyboard","\xd8","\x71","\xfe","\xae"),
	HX_HCSTRING("lime_display_object_set_moves_for_soft_keyboard","\x13","\x26","\x0a","\x9b"),
	HX_HCSTRING("lime_display_object_get_moves_for_soft_keyboard","\x07","\x47","\x71","\x58"),
	HX_HCSTRING("lime_display_object_dismiss_soft_keyboard","\x2e","\xc8","\x72","\x21"),
	HX_HCSTRING("lime_display_object_request_soft_keyboard","\xf3","\x76","\x71","\x51"),
	::String(null())
};

void InteractiveObject_obj::__register()
{
	hx::Object *dummy = new InteractiveObject_obj;
	InteractiveObject_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.display.InteractiveObject","\x91","\xc8","\x9d","\xf6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &InteractiveObject_obj::__GetStatic;
	__mClass->mSetStaticField = &InteractiveObject_obj::__SetStatic;
	__mClass->mMarkFunc = InteractiveObject_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(InteractiveObject_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(InteractiveObject_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< InteractiveObject_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = InteractiveObject_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InteractiveObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InteractiveObject_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void InteractiveObject_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_dae410633c8f1026_103_boot)
HXLINE( 103)		lime_display_object_set_mouse_enabled = ::openfl::_legacy::Lib_obj::load(HX_("lime-legacy",c1,7f,b9,87),HX_("lime_legacy_display_object_set_mouse_enabled",33,46,ed,ec),(int)2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_dae410633c8f1026_104_boot)
HXLINE( 104)		lime_display_object_set_needs_soft_keyboard = ::openfl::_legacy::Lib_obj::load(HX_("lime-legacy",c1,7f,b9,87),HX_("lime_legacy_display_object_set_needs_soft_keyboard",46,30,3e,9a),(int)2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_dae410633c8f1026_105_boot)
HXLINE( 105)		lime_display_object_get_needs_soft_keyboard = ::openfl::_legacy::Lib_obj::load(HX_("lime-legacy",c1,7f,b9,87),HX_("lime_legacy_display_object_get_needs_soft_keyboard",3a,c7,dc,97),(int)1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_dae410633c8f1026_106_boot)
HXLINE( 106)		lime_display_object_set_moves_for_soft_keyboard = ::openfl::_legacy::Lib_obj::load(HX_("lime-legacy",c1,7f,b9,87),HX_("lime_legacy_display_object_set_moves_for_soft_keyboard",75,d4,7b,c7),(int)2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_dae410633c8f1026_107_boot)
HXLINE( 107)		lime_display_object_get_moves_for_soft_keyboard = ::openfl::_legacy::Lib_obj::load(HX_("lime-legacy",c1,7f,b9,87),HX_("lime_legacy_display_object_get_moves_for_soft_keyboard",69,f5,e2,84),(int)1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_dae410633c8f1026_108_boot)
HXLINE( 108)		lime_display_object_dismiss_soft_keyboard = ::openfl::_legacy::Lib_obj::load(HX_("lime-legacy",c1,7f,b9,87),HX_("lime_legacy_display_object_dismiss_soft_keyboard",10,a1,bf,7a),(int)1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_dae410633c8f1026_109_boot)
HXLINE( 109)		lime_display_object_request_soft_keyboard = ::openfl::_legacy::Lib_obj::load(HX_("lime-legacy",c1,7f,b9,87),HX_("lime_legacy_display_object_request_soft_keyboard",d5,4f,be,aa),(int)1);
            	}
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace display
