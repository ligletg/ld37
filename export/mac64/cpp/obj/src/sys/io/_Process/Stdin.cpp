// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_io__Process_Stdin
#include <sys/io/_Process/Stdin.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b561ec1156706856_31_new,"sys.io._Process.Stdin","new",0xd3131563,"sys.io._Process.Stdin.new","/usr/local/lib/haxe/std/cpp/_std/sys/io/Process.hx",31,0x8244a714)
HX_DEFINE_STACK_FRAME(_hx_pos_b561ec1156706856_36_close,"sys.io._Process.Stdin","close",0xbd3fe37b,"sys.io._Process.Stdin.close","/usr/local/lib/haxe/std/cpp/_std/sys/io/Process.hx",36,0x8244a714)
HX_DEFINE_STACK_FRAME(_hx_pos_b561ec1156706856_41_writeByte,"sys.io._Process.Stdin","writeByte",0xfb987cca,"sys.io._Process.Stdin.writeByte","/usr/local/lib/haxe/std/cpp/_std/sys/io/Process.hx",41,0x8244a714)
HX_DEFINE_STACK_FRAME(_hx_pos_b561ec1156706856_47_writeBytes,"sys.io._Process.Stdin","writeBytes",0x29d4b469,"sys.io._Process.Stdin.writeBytes","/usr/local/lib/haxe/std/cpp/_std/sys/io/Process.hx",47,0x8244a714)
namespace sys{
namespace io{
namespace _Process{

void Stdin_obj::__construct( ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_b561ec1156706856_31_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(p,"p")
HXLINE(  32)		this->p = p;
HXLINE(  33)		this->buf = ::haxe::io::Bytes_obj::alloc((int)1);
            	}

Dynamic Stdin_obj::__CreateEmpty() { return new Stdin_obj; }

void *Stdin_obj::_hx_vtable = 0;

Dynamic Stdin_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Stdin_obj > _hx_result = new Stdin_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Stdin_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3473efad) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3473efad;
	} else {
		return inClassId==(int)0x7e8e3445;
	}
}

void Stdin_obj::close(){
            	HX_STACKFRAME(&_hx_pos_b561ec1156706856_36_close)
            	HX_STACK_THIS(this)
HXLINE(  37)		this->super::close();
HXLINE(  38)		_hx_std_process_stdin_close(this->p);
            	}


void Stdin_obj::writeByte(int c){
            	HX_STACKFRAME(&_hx_pos_b561ec1156706856_41_writeByte)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(c,"c")
HXLINE(  42)		this->buf->b[(int)0] = c;
HXLINE(  43)		this->writeBytes(this->buf,(int)0,(int)1);
            	}


int Stdin_obj::writeBytes( ::haxe::io::Bytes buf,int pos,int len){
            	HX_GC_STACKFRAME(&_hx_pos_b561ec1156706856_47_writeBytes)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buf,"buf")
            	HX_STACK_ARG(pos,"pos")
            	HX_STACK_ARG(len,"len")
HXLINE(  47)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  48)			return _hx_std_process_stdin_write(this->p,buf->b,pos,len);
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic e = _hx_e;
HXLINE(  50)				HX_STACK_DO_THROW( ::haxe::io::Eof_obj::__alloc( HX_CTX ));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  47)		return (int)0;
            	}



hx::ObjectPtr< Stdin_obj > Stdin_obj::__new( ::Dynamic p) {
	hx::ObjectPtr< Stdin_obj > __this = new Stdin_obj();
	__this->__construct(p);
	return __this;
}

hx::ObjectPtr< Stdin_obj > Stdin_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic p) {
	Stdin_obj *__this = (Stdin_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Stdin_obj), true, "sys.io._Process.Stdin"));
	*(void **)__this = Stdin_obj::_hx_vtable;
	__this->__construct(p);
	return __this;
}

Stdin_obj::Stdin_obj()
{
}

void Stdin_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stdin);
	HX_MARK_MEMBER_NAME(p,"p");
	HX_MARK_MEMBER_NAME(buf,"buf");
	HX_MARK_END_CLASS();
}

void Stdin_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(p,"p");
	HX_VISIT_MEMBER_NAME(buf,"buf");
}

hx::Val Stdin_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"p") ) { return hx::Val( p); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { return hx::Val( buf); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return hx::Val( close_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"writeByte") ) { return hx::Val( writeByte_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return hx::Val( writeBytes_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Stdin_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"p") ) { p=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { buf=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stdin_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("p","\x70","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Stdin_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Stdin_obj,p),HX_HCSTRING("p","\x70","\x00","\x00","\x00")},
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(Stdin_obj,buf),HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Stdin_obj_sStaticStorageInfo = 0;
#endif

static ::String Stdin_obj_sMemberFields[] = {
	HX_HCSTRING("p","\x70","\x00","\x00","\x00"),
	HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("writeByte","\x87","\x13","\xd7","\x49"),
	HX_HCSTRING("writeBytes","\x0c","\x03","\x5a","\x52"),
	::String(null()) };

static void Stdin_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stdin_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Stdin_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stdin_obj::__mClass,"__mClass");
};

#endif

hx::Class Stdin_obj::__mClass;

void Stdin_obj::__register()
{
	hx::Object *dummy = new Stdin_obj;
	Stdin_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.io._Process.Stdin","\xf1","\x27","\x26","\xc5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Stdin_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Stdin_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stdin_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Stdin_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Stdin_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Stdin_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sys
} // end namespace io
} // end namespace _Process
