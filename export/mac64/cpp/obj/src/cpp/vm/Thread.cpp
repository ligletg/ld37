// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_Thread
#include <cpp/vm/Thread.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_692bdcbb4d615969_31_new,"cpp.vm.Thread","new",0x66262c28,"cpp.vm.Thread.new","/usr/local/lib/haxe/std/cpp/vm/Thread.hx",31,0x8eb67f65)
HX_DEFINE_STACK_FRAME(_hx_pos_692bdcbb4d615969_38_sendMessage,"cpp.vm.Thread","sendMessage",0x48dced27,"cpp.vm.Thread.sendMessage","/usr/local/lib/haxe/std/cpp/vm/Thread.hx",38,0x8eb67f65)
HX_DEFINE_STACK_FRAME(_hx_pos_692bdcbb4d615969_66___compare,"cpp.vm.Thread","__compare",0x3204cb4d,"cpp.vm.Thread.__compare","/usr/local/lib/haxe/std/cpp/vm/Thread.hx",66,0x8eb67f65)
HX_DEFINE_STACK_FRAME(_hx_pos_692bdcbb4d615969_46_current,"cpp.vm.Thread","current",0x21a37c01,"cpp.vm.Thread.current","/usr/local/lib/haxe/std/cpp/vm/Thread.hx",46,0x8eb67f65)
HX_DEFINE_STACK_FRAME(_hx_pos_692bdcbb4d615969_53_create,"cpp.vm.Thread","create",0xb01a9834,"cpp.vm.Thread.create","/usr/local/lib/haxe/std/cpp/vm/Thread.hx",53,0x8eb67f65)
HX_DEFINE_STACK_FRAME(_hx_pos_692bdcbb4d615969_62_readMessage,"cpp.vm.Thread","readMessage",0x11bc2cd9,"cpp.vm.Thread.readMessage","/usr/local/lib/haxe/std/cpp/vm/Thread.hx",62,0x8eb67f65)
namespace cpp{
namespace vm{

void Thread_obj::__construct( ::Dynamic h){
            	HX_STACKFRAME(&_hx_pos_692bdcbb4d615969_31_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(h,"h")
HXLINE(  31)		this->handle = h;
            	}

Dynamic Thread_obj::__CreateEmpty() { return new Thread_obj; }

void *Thread_obj::_hx_vtable = 0;

Dynamic Thread_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Thread_obj > _hx_result = new Thread_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Thread_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x69432498;
}

void Thread_obj::sendMessage( ::Dynamic msg){
            	HX_STACKFRAME(&_hx_pos_692bdcbb4d615969_38_sendMessage)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(msg,"msg")
HXLINE(  38)		::__hxcpp_thread_send(this->handle,msg);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Thread_obj,sendMessage,(void))

int Thread_obj::__compare( ::Dynamic t){
            	HX_STACKFRAME(&_hx_pos_692bdcbb4d615969_66___compare)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(t,"t")
HXLINE(  66)		if (hx::IsEq( this->handle, ::Dynamic(t->__Field(HX_("handle",a8,83,fd,b7),hx::paccDynamic)) )) {
HXLINE(  66)			return (int)0;
            		}
            		else {
HXLINE(  66)			return (int)1;
            		}
HXDLIN(  66)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Thread_obj,__compare,return )

 ::cpp::vm::Thread Thread_obj::current(){
            	HX_GC_STACKFRAME(&_hx_pos_692bdcbb4d615969_46_current)
HXLINE(  46)		return  ::cpp::vm::Thread_obj::__alloc( HX_CTX ,::__hxcpp_thread_current());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Thread_obj,current,return )

 ::cpp::vm::Thread Thread_obj::create( ::Dynamic callb){
            	HX_GC_STACKFRAME(&_hx_pos_692bdcbb4d615969_53_create)
            	HX_STACK_ARG(callb,"callb")
HXLINE(  53)		return  ::cpp::vm::Thread_obj::__alloc( HX_CTX ,::__hxcpp_thread_create(callb));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Thread_obj,create,return )

 ::Dynamic Thread_obj::readMessage(bool block){
            	HX_STACKFRAME(&_hx_pos_692bdcbb4d615969_62_readMessage)
            	HX_STACK_ARG(block,"block")
HXLINE(  62)		return ::__hxcpp_thread_read_message(block);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Thread_obj,readMessage,return )


Thread_obj::Thread_obj()
{
}

void Thread_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Thread);
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_END_CLASS();
}

void Thread_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
}

hx::Val Thread_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return hx::Val( handle); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__compare") ) { return hx::Val( __compare_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sendMessage") ) { return hx::Val( sendMessage_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool Thread_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { outValue = current_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readMessage") ) { outValue = readMessage_dyn(); return true; }
	}
	return false;
}

hx::Val Thread_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Thread_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Thread_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Thread_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Thread_obj_sStaticStorageInfo = 0;
#endif

static ::String Thread_obj_sMemberFields[] = {
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("sendMessage","\x5f","\x89","\x1d","\x24"),
	HX_HCSTRING("__compare","\x85","\x69","\xb7","\x04"),
	::String(null()) };

static void Thread_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Thread_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Thread_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Thread_obj::__mClass,"__mClass");
};

#endif

hx::Class Thread_obj::__mClass;

static ::String Thread_obj_sStaticFields[] = {
	HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("readMessage","\x11","\xc9","\xfc","\xec"),
	::String(null())
};

void Thread_obj::__register()
{
	hx::Object *dummy = new Thread_obj;
	Thread_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.vm.Thread","\x36","\x38","\xcb","\x7d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Thread_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Thread_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Thread_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Thread_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Thread_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Thread_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Thread_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Thread_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace cpp
} // end namespace vm
