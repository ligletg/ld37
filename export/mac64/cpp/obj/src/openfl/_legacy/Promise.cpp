// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_Future
#include <openfl/_legacy/Future.h>
#endif
#ifndef INCLUDED_openfl__legacy_Promise
#include <openfl/_legacy/Promise.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5257cebfe98784b5_1850_new,"openfl._legacy.Promise","new",0x7f6b0a89,"openfl._legacy.Promise.new","openfl/_legacy/Assets.hx",1850,0x9276b055)
HX_DEFINE_STACK_FRAME(_hx_pos_5257cebfe98784b5_1855_complete,"openfl._legacy.Promise","complete",0x04e051f0,"openfl._legacy.Promise.complete","openfl/_legacy/Assets.hx",1855,0x9276b055)
HX_DEFINE_STACK_FRAME(_hx_pos_5257cebfe98784b5_1881_completeWith,"openfl._legacy.Promise","completeWith",0xd3d9ac16,"openfl._legacy.Promise.completeWith","openfl/_legacy/Assets.hx",1881,0x9276b055)
HX_DEFINE_STACK_FRAME(_hx_pos_5257cebfe98784b5_1893_error,"openfl._legacy.Promise","error",0x5222a231,"openfl._legacy.Promise.error","openfl/_legacy/Assets.hx",1893,0x9276b055)
HX_DEFINE_STACK_FRAME(_hx_pos_5257cebfe98784b5_1919_progress,"openfl._legacy.Promise","progress",0x0b4348e4,"openfl._legacy.Promise.progress","openfl/_legacy/Assets.hx",1919,0x9276b055)
HX_DEFINE_STACK_FRAME(_hx_pos_5257cebfe98784b5_1949_get_isCompleted,"openfl._legacy.Promise","get_isCompleted",0xfc756381,"openfl._legacy.Promise.get_isCompleted","openfl/_legacy/Assets.hx",1949,0x9276b055)
namespace openfl{
namespace _legacy{

void Promise_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_5257cebfe98784b5_1850_new)
            	HX_STACK_THIS(this)
HXLINE(1850)		this->future =  ::openfl::_legacy::Future_obj::__alloc( HX_CTX ,null());
            	}

Dynamic Promise_obj::__CreateEmpty() { return new Promise_obj; }

void *Promise_obj::_hx_vtable = 0;

Dynamic Promise_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Promise_obj > _hx_result = new Promise_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Promise_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x256d9887;
}

 ::openfl::_legacy::Promise Promise_obj::complete( ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_5257cebfe98784b5_1855_complete)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(data,"data")
HXLINE(1857)		if (!(this->future->_hx___errored)) {
HXLINE(1859)			this->future->_hx___completed = true;
HXLINE(1860)			this->future->value = data;
HXLINE(1862)			if (hx::IsNotNull( this->future->_hx___completeListeners )) {
HXLINE(1864)				{
HXLINE(1864)					HX_VARI( int,_g) = (int)0;
HXDLIN(1864)					HX_VARI( ::Array< ::Dynamic>,_g1) = this->future->_hx___completeListeners;
HXDLIN(1864)					while((_g < _g1->length)){
HXLINE(1864)						HX_VARI(  ::Dynamic,listener) = _g1->__get(_g);
HXDLIN(1864)						_g = (_g + (int)1);
HXLINE(1866)						listener(data);
            					}
            				}
HXLINE(1870)				this->future->_hx___completeListeners = null();
            			}
            		}
HXLINE(1876)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,complete,return )

 ::openfl::_legacy::Promise Promise_obj::completeWith( ::openfl::_legacy::Future future){
            	HX_STACKFRAME(&_hx_pos_5257cebfe98784b5_1881_completeWith)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(future,"future")
HXLINE(1883)		future->onComplete(this->complete_dyn());
HXLINE(1884)		future->onError(this->error_dyn());
HXLINE(1885)		future->onProgress(this->progress_dyn());
HXLINE(1887)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,completeWith,return )

 ::openfl::_legacy::Promise Promise_obj::error( ::Dynamic msg){
            	HX_STACKFRAME(&_hx_pos_5257cebfe98784b5_1893_error)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(msg,"msg")
HXLINE(1895)		if (!(this->future->_hx___completed)) {
HXLINE(1897)			this->future->_hx___errored = true;
HXLINE(1898)			this->future->_hx___errorMessage = msg;
HXLINE(1900)			if (hx::IsNotNull( this->future->_hx___errorListeners )) {
HXLINE(1902)				{
HXLINE(1902)					HX_VARI( int,_g) = (int)0;
HXDLIN(1902)					HX_VARI( ::Array< ::Dynamic>,_g1) = this->future->_hx___errorListeners;
HXDLIN(1902)					while((_g < _g1->length)){
HXLINE(1902)						HX_VARI(  ::Dynamic,listener) = _g1->__get(_g);
HXDLIN(1902)						_g = (_g + (int)1);
HXLINE(1904)						listener(msg);
            					}
            				}
HXLINE(1908)				this->future->_hx___errorListeners = null();
            			}
            		}
HXLINE(1914)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,error,return )

 ::openfl::_legacy::Promise Promise_obj::progress(Float progress){
            	HX_STACKFRAME(&_hx_pos_5257cebfe98784b5_1919_progress)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(progress,"progress")
HXLINE(1921)		bool _hx_tmp;
HXDLIN(1921)		if (!(this->future->_hx___errored)) {
HXLINE(1921)			_hx_tmp = !(this->future->_hx___completed);
            		}
            		else {
HXLINE(1921)			_hx_tmp = false;
            		}
HXDLIN(1921)		if (_hx_tmp) {
HXLINE(1923)			if (hx::IsNotNull( this->future->_hx___progressListeners )) {
HXLINE(1925)				HX_VARI( int,_g) = (int)0;
HXDLIN(1925)				HX_VARI( ::Array< ::Dynamic>,_g1) = this->future->_hx___progressListeners;
HXDLIN(1925)				while((_g < _g1->length)){
HXLINE(1925)					HX_VARI(  ::Dynamic,listener) = _g1->__get(_g);
HXDLIN(1925)					_g = (_g + (int)1);
HXLINE(1927)					listener(progress);
            				}
            			}
            		}
HXLINE(1935)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,progress,return )

bool Promise_obj::get_isCompleted(){
            	HX_STACKFRAME(&_hx_pos_5257cebfe98784b5_1949_get_isCompleted)
            	HX_STACK_THIS(this)
HXLINE(1949)		return this->future->get_isCompleted();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,get_isCompleted,return )


hx::ObjectPtr< Promise_obj > Promise_obj::__new() {
	hx::ObjectPtr< Promise_obj > __this = new Promise_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Promise_obj > Promise_obj::__alloc(hx::Ctx *_hx_ctx) {
	Promise_obj *__this = (Promise_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Promise_obj), true, "openfl._legacy.Promise"));
	*(void **)__this = Promise_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Promise_obj::Promise_obj()
{
}

void Promise_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Promise);
	HX_MARK_MEMBER_NAME(future,"future");
	HX_MARK_MEMBER_NAME(isCompleted,"isCompleted");
	HX_MARK_END_CLASS();
}

void Promise_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(future,"future");
	HX_VISIT_MEMBER_NAME(isCompleted,"isCompleted");
}

hx::Val Promise_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return hx::Val( error_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"future") ) { return hx::Val( future); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { return hx::Val( complete_dyn()); }
		if (HX_FIELD_EQ(inName,"progress") ) { return hx::Val( progress_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isCompleted") ) { return hx::Val( inCallProp == hx::paccAlways ? get_isCompleted() : isCompleted); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"completeWith") ) { return hx::Val( completeWith_dyn()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_isCompleted") ) { return hx::Val( get_isCompleted_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Promise_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"future") ) { future=inValue.Cast<  ::openfl::_legacy::Future >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isCompleted") ) { isCompleted=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Promise_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("future","\x43","\x98","\x4e","\x73"));
	outFields->push(HX_HCSTRING("isCompleted","\x41","\x58","\xb9","\x2d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Promise_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::Future*/ ,(int)offsetof(Promise_obj,future),HX_HCSTRING("future","\x43","\x98","\x4e","\x73")},
	{hx::fsBool,(int)offsetof(Promise_obj,isCompleted),HX_HCSTRING("isCompleted","\x41","\x58","\xb9","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Promise_obj_sStaticStorageInfo = 0;
#endif

static ::String Promise_obj_sMemberFields[] = {
	HX_HCSTRING("future","\x43","\x98","\x4e","\x73"),
	HX_HCSTRING("isCompleted","\x41","\x58","\xb9","\x2d"),
	HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),
	HX_HCSTRING("completeWith","\x5f","\xf3","\xba","\xc2"),
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"),
	HX_HCSTRING("get_isCompleted","\xd8","\x0f","\x9b","\xee"),
	::String(null()) };

static void Promise_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Promise_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Promise_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Promise_obj::__mClass,"__mClass");
};

#endif

hx::Class Promise_obj::__mClass;

void Promise_obj::__register()
{
	hx::Object *dummy = new Promise_obj;
	Promise_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.Promise","\x17","\x12","\x87","\x9c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Promise_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Promise_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Promise_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Promise_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Promise_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Promise_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _legacy
