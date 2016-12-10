// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_replay_MouseRecord
#include <flixel/system/replay/MouseRecord.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fa93722f50df8cd4_30_new,"flixel.system.replay.MouseRecord","new",0xbd087b2e,"flixel.system.replay.MouseRecord.new","flixel/system/replay/MouseRecord.hx",30,0x6a00bda3)
namespace flixel{
namespace _hx_system{
namespace replay{

void MouseRecord_obj::__construct(int x,int y,int button,int wheel){
            	HX_STACKFRAME(&_hx_pos_fa93722f50df8cd4_30_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
            	HX_STACK_ARG(button,"button")
            	HX_STACK_ARG(wheel,"wheel")
HXLINE(  31)		this->x = x;
HXLINE(  32)		this->y = y;
HXLINE(  33)		this->button = button;
HXLINE(  34)		this->wheel = wheel;
            	}

Dynamic MouseRecord_obj::__CreateEmpty() { return new MouseRecord_obj; }

void *MouseRecord_obj::_hx_vtable = 0;

Dynamic MouseRecord_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MouseRecord_obj > _hx_result = new MouseRecord_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool MouseRecord_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x49a35384;
}


MouseRecord_obj::MouseRecord_obj()
{
}

hx::Val MouseRecord_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"wheel") ) { return hx::Val( wheel); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return hx::Val( button); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val MouseRecord_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"wheel") ) { wheel=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MouseRecord_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"));
	outFields->push(HX_HCSTRING("wheel","\x9b","\x34","\xba","\xc9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo MouseRecord_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(MouseRecord_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(MouseRecord_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(MouseRecord_obj,button),HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9")},
	{hx::fsInt,(int)offsetof(MouseRecord_obj,wheel),HX_HCSTRING("wheel","\x9b","\x34","\xba","\xc9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *MouseRecord_obj_sStaticStorageInfo = 0;
#endif

static ::String MouseRecord_obj_sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"),
	HX_HCSTRING("wheel","\x9b","\x34","\xba","\xc9"),
	::String(null()) };

static void MouseRecord_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseRecord_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MouseRecord_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseRecord_obj::__mClass,"__mClass");
};

#endif

hx::Class MouseRecord_obj::__mClass;

void MouseRecord_obj::__register()
{
	hx::Object *dummy = new MouseRecord_obj;
	MouseRecord_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.replay.MouseRecord","\x3c","\x0c","\x4c","\xad");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MouseRecord_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MouseRecord_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MouseRecord_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MouseRecord_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MouseRecord_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MouseRecord_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace replay
