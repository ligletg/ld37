// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_media_SoundLoaderContext
#include <openfl/media/SoundLoaderContext.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_baeaab40d0a56ac0_11_new,"openfl.media.SoundLoaderContext","new",0xafd95147,"openfl.media.SoundLoaderContext.new","openfl/media/SoundLoaderContext.hx",11,0x79afda07)
namespace openfl{
namespace media{

void SoundLoaderContext_obj::__construct(hx::Null< Float >  __o_bufferTime,hx::Null< bool >  __o_checkPolicyFile){
Float bufferTime = __o_bufferTime.Default(1000);
bool checkPolicyFile = __o_checkPolicyFile.Default(false);
            	HX_STACKFRAME(&_hx_pos_baeaab40d0a56ac0_11_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(bufferTime,"bufferTime")
            	HX_STACK_ARG(checkPolicyFile,"checkPolicyFile")
HXLINE(  13)		this->bufferTime = bufferTime;
HXLINE(  14)		this->checkPolicyFile = checkPolicyFile;
            	}

Dynamic SoundLoaderContext_obj::__CreateEmpty() { return new SoundLoaderContext_obj; }

void *SoundLoaderContext_obj::_hx_vtable = 0;

Dynamic SoundLoaderContext_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SoundLoaderContext_obj > _hx_result = new SoundLoaderContext_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool SoundLoaderContext_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x44beed41;
}


SoundLoaderContext_obj::SoundLoaderContext_obj()
{
}

hx::Val SoundLoaderContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"bufferTime") ) { return hx::Val( bufferTime); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"checkPolicyFile") ) { return hx::Val( checkPolicyFile); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val SoundLoaderContext_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"bufferTime") ) { bufferTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"checkPolicyFile") ) { checkPolicyFile=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundLoaderContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bufferTime","\x2d","\x35","\x0d","\x9e"));
	outFields->push(HX_HCSTRING("checkPolicyFile","\x76","\x1e","\x96","\xaf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo SoundLoaderContext_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(SoundLoaderContext_obj,bufferTime),HX_HCSTRING("bufferTime","\x2d","\x35","\x0d","\x9e")},
	{hx::fsBool,(int)offsetof(SoundLoaderContext_obj,checkPolicyFile),HX_HCSTRING("checkPolicyFile","\x76","\x1e","\x96","\xaf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *SoundLoaderContext_obj_sStaticStorageInfo = 0;
#endif

static ::String SoundLoaderContext_obj_sMemberFields[] = {
	HX_HCSTRING("bufferTime","\x2d","\x35","\x0d","\x9e"),
	HX_HCSTRING("checkPolicyFile","\x76","\x1e","\x96","\xaf"),
	::String(null()) };

static void SoundLoaderContext_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundLoaderContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SoundLoaderContext_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundLoaderContext_obj::__mClass,"__mClass");
};

#endif

hx::Class SoundLoaderContext_obj::__mClass;

void SoundLoaderContext_obj::__register()
{
	hx::Object *dummy = new SoundLoaderContext_obj;
	SoundLoaderContext_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.media.SoundLoaderContext","\xd5","\xa1","\xdf","\x8d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SoundLoaderContext_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SoundLoaderContext_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SoundLoaderContext_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SoundLoaderContext_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SoundLoaderContext_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SoundLoaderContext_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace media
