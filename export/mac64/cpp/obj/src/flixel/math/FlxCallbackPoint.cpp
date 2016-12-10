// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_math_FlxCallbackPoint
#include <flixel/math/FlxCallbackPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0e989bab684323cb_472_new,"flixel.math.FlxCallbackPoint","new",0x2af621df,"flixel.math.FlxCallbackPoint.new","flixel/math/FlxPoint.hx",472,0xb3e1cd2c)
HX_DEFINE_STACK_FRAME(_hx_pos_0e989bab684323cb_489_set,"flixel.math.FlxCallbackPoint","set",0x2af9ed21,"flixel.math.FlxCallbackPoint.set","flixel/math/FlxPoint.hx",489,0xb3e1cd2c)
HX_DEFINE_STACK_FRAME(_hx_pos_0e989bab684323cb_497_set_x,"flixel.math.FlxCallbackPoint","set_x",0x4f288a9a,"flixel.math.FlxCallbackPoint.set_x","flixel/math/FlxPoint.hx",497,0xb3e1cd2c)
HX_DEFINE_STACK_FRAME(_hx_pos_0e989bab684323cb_505_set_y,"flixel.math.FlxCallbackPoint","set_y",0x4f288a9b,"flixel.math.FlxCallbackPoint.set_y","flixel/math/FlxPoint.hx",505,0xb3e1cd2c)
HX_DEFINE_STACK_FRAME(_hx_pos_0e989bab684323cb_513_destroy,"flixel.math.FlxCallbackPoint","destroy",0xdd08a9f9,"flixel.math.FlxCallbackPoint.destroy","flixel/math/FlxPoint.hx",513,0xb3e1cd2c)
HX_DEFINE_STACK_FRAME(_hx_pos_0e989bab684323cb_520_put,"flixel.math.FlxCallbackPoint","put",0x2af7b44e,"flixel.math.FlxCallbackPoint.put","flixel/math/FlxPoint.hx",520,0xb3e1cd2c)
namespace flixel{
namespace math{

void FlxCallbackPoint_obj::__construct( ::Dynamic setXCallback, ::Dynamic setYCallback, ::Dynamic setXYCallback){
            	HX_STACKFRAME(&_hx_pos_0e989bab684323cb_472_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(setXCallback,"setXCallback")
            	HX_STACK_ARG(setYCallback,"setYCallback")
            	HX_STACK_ARG(setXYCallback,"setXYCallback")
HXLINE( 473)		super::__construct(null(),null());
HXLINE( 475)		this->_setXCallback = setXCallback;
HXLINE( 476)		this->_setYCallback = setXYCallback;
HXLINE( 477)		this->_setXYCallback = setXYCallback;
HXLINE( 479)		if (hx::IsNotNull( this->_setXCallback )) {
HXLINE( 481)			if (hx::IsNull( this->_setYCallback )) {
HXLINE( 482)				this->_setYCallback = setXCallback;
            			}
HXLINE( 483)			if (hx::IsNull( this->_setXYCallback )) {
HXLINE( 484)				this->_setXYCallback = setXCallback;
            			}
            		}
            	}

Dynamic FlxCallbackPoint_obj::__CreateEmpty() { return new FlxCallbackPoint_obj; }

void *FlxCallbackPoint_obj::_hx_vtable = 0;

Dynamic FlxCallbackPoint_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxCallbackPoint_obj > _hx_result = new FlxCallbackPoint_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxCallbackPoint_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x40ef3a42) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x40ef3a42;
	} else {
		return inClassId==(int)0x489bc83d;
	}
}

 ::flixel::math::FlxPoint FlxCallbackPoint_obj::set(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
            	HX_STACKFRAME(&_hx_pos_0e989bab684323cb_489_set)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(X,"X")
            	HX_STACK_ARG(Y,"Y")
HXLINE( 490)		this->super::set(X,Y);
HXLINE( 491)		if (hx::IsNotNull( this->_setXYCallback )) {
HXLINE( 492)			this->_setXYCallback(hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 493)		return hx::ObjectPtr<OBJ_>(this);
            	}


Float FlxCallbackPoint_obj::set_x(Float Value){
            	HX_STACKFRAME(&_hx_pos_0e989bab684323cb_497_set_x)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Value,"Value")
HXLINE( 498)		this->super::set_x(Value);
HXLINE( 499)		if (hx::IsNotNull( this->_setXCallback )) {
HXLINE( 500)			this->_setXCallback(hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 501)		return Value;
            	}


Float FlxCallbackPoint_obj::set_y(Float Value){
            	HX_STACKFRAME(&_hx_pos_0e989bab684323cb_505_set_y)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Value,"Value")
HXLINE( 506)		this->super::set_y(Value);
HXLINE( 507)		if (hx::IsNotNull( this->_setYCallback )) {
HXLINE( 508)			this->_setYCallback(hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 509)		return Value;
            	}


void FlxCallbackPoint_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_0e989bab684323cb_513_destroy)
            	HX_STACK_THIS(this)
HXLINE( 514)		this->super::destroy();
HXLINE( 515)		this->_setXCallback = null();
HXLINE( 516)		this->_setYCallback = null();
HXLINE( 517)		this->_setXYCallback = null();
            	}


void FlxCallbackPoint_obj::put(){
            	HX_STACKFRAME(&_hx_pos_0e989bab684323cb_520_put)
            	HX_STACK_THIS(this)
            	}



hx::ObjectPtr< FlxCallbackPoint_obj > FlxCallbackPoint_obj::__new( ::Dynamic setXCallback, ::Dynamic setYCallback, ::Dynamic setXYCallback) {
	hx::ObjectPtr< FlxCallbackPoint_obj > __this = new FlxCallbackPoint_obj();
	__this->__construct(setXCallback,setYCallback,setXYCallback);
	return __this;
}

hx::ObjectPtr< FlxCallbackPoint_obj > FlxCallbackPoint_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic setXCallback, ::Dynamic setYCallback, ::Dynamic setXYCallback) {
	FlxCallbackPoint_obj *__this = (FlxCallbackPoint_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxCallbackPoint_obj), true, "flixel.math.FlxCallbackPoint"));
	*(void **)__this = FlxCallbackPoint_obj::_hx_vtable;
	__this->__construct(setXCallback,setYCallback,setXYCallback);
	return __this;
}

FlxCallbackPoint_obj::FlxCallbackPoint_obj()
{
}

void FlxCallbackPoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxCallbackPoint);
	HX_MARK_MEMBER_NAME(_setXCallback,"_setXCallback");
	HX_MARK_MEMBER_NAME(_setYCallback,"_setYCallback");
	HX_MARK_MEMBER_NAME(_setXYCallback,"_setXYCallback");
	HX_MARK_END_CLASS();
}

void FlxCallbackPoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_setXCallback,"_setXCallback");
	HX_VISIT_MEMBER_NAME(_setYCallback,"_setYCallback");
	HX_VISIT_MEMBER_NAME(_setXYCallback,"_setXYCallback");
}

hx::Val FlxCallbackPoint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn()); }
		if (HX_FIELD_EQ(inName,"put") ) { return hx::Val( put_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"set_x") ) { return hx::Val( set_x_dyn()); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return hx::Val( set_y_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_setXCallback") ) { return hx::Val( _setXCallback); }
		if (HX_FIELD_EQ(inName,"_setYCallback") ) { return hx::Val( _setYCallback); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_setXYCallback") ) { return hx::Val( _setXYCallback); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxCallbackPoint_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_setXCallback") ) { _setXCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_setYCallback") ) { _setYCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_setXYCallback") ) { _setXYCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxCallbackPoint_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCallbackPoint_obj,_setXCallback),HX_HCSTRING("_setXCallback","\x3a","\xe1","\x9f","\x40")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCallbackPoint_obj,_setYCallback),HX_HCSTRING("_setYCallback","\x3b","\x4a","\x91","\x13")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCallbackPoint_obj,_setXYCallback),HX_HCSTRING("_setXYCallback","\x49","\x36","\x58","\xb1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxCallbackPoint_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxCallbackPoint_obj_sMemberFields[] = {
	HX_HCSTRING("_setXCallback","\x3a","\xe1","\x9f","\x40"),
	HX_HCSTRING("_setYCallback","\x3b","\x4a","\x91","\x13"),
	HX_HCSTRING("_setXYCallback","\x49","\x36","\x58","\xb1"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("put","\xcf","\x62","\x55","\x00"),
	::String(null()) };

static void FlxCallbackPoint_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxCallbackPoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxCallbackPoint_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxCallbackPoint_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxCallbackPoint_obj::__mClass;

void FlxCallbackPoint_obj::__register()
{
	hx::Object *dummy = new FlxCallbackPoint_obj;
	FlxCallbackPoint_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.math.FlxCallbackPoint","\x6d","\x46","\xf2","\x5b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxCallbackPoint_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxCallbackPoint_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxCallbackPoint_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxCallbackPoint_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxCallbackPoint_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxCallbackPoint_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace math
