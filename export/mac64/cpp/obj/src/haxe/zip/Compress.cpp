// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_zip_Compress
#include <haxe/zip/Compress.h>
#endif
#ifndef INCLUDED_haxe_zip_FlushMode
#include <haxe/zip/FlushMode.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_009433530f8e647c_30_new,"haxe.zip.Compress","new",0x4ddc50a9,"haxe.zip.Compress.new","/usr/local/lib/haxe/std/cpp/_std/haxe/zip/Compress.hx",30,0x9f8c8027)
HX_DEFINE_STACK_FRAME(_hx_pos_009433530f8e647c_34_execute,"haxe.zip.Compress","execute",0xd015e2fe,"haxe.zip.Compress.execute","/usr/local/lib/haxe/std/cpp/_std/haxe/zip/Compress.hx",34,0x9f8c8027)
HX_DEFINE_STACK_FRAME(_hx_pos_009433530f8e647c_38_setFlushMode,"haxe.zip.Compress","setFlushMode",0x35ab82dc,"haxe.zip.Compress.setFlushMode","/usr/local/lib/haxe/std/cpp/_std/haxe/zip/Compress.hx",38,0x9f8c8027)
HX_DEFINE_STACK_FRAME(_hx_pos_009433530f8e647c_42_close,"haxe.zip.Compress","close",0x6942fc41,"haxe.zip.Compress.close","/usr/local/lib/haxe/std/cpp/_std/haxe/zip/Compress.hx",42,0x9f8c8027)
HX_DEFINE_STACK_FRAME(_hx_pos_009433530f8e647c_45_run,"haxe.zip.Compress","run",0x4ddf6794,"haxe.zip.Compress.run","/usr/local/lib/haxe/std/cpp/_std/haxe/zip/Compress.hx",45,0x9f8c8027)
namespace haxe{
namespace zip{

void Compress_obj::__construct(int level){
            	HX_STACKFRAME(&_hx_pos_009433530f8e647c_30_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(level,"level")
HXLINE(  30)		this->s = _hx_deflate_init(level);
            	}

Dynamic Compress_obj::__CreateEmpty() { return new Compress_obj; }

void *Compress_obj::_hx_vtable = 0;

Dynamic Compress_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Compress_obj > _hx_result = new Compress_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Compress_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2950247d;
}

 ::Dynamic Compress_obj::execute( ::haxe::io::Bytes src,int srcPos, ::haxe::io::Bytes dst,int dstPos){
            	HX_STACKFRAME(&_hx_pos_009433530f8e647c_34_execute)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(src,"src")
            	HX_STACK_ARG(srcPos,"srcPos")
            	HX_STACK_ARG(dst,"dst")
            	HX_STACK_ARG(dstPos,"dstPos")
HXLINE(  34)		return _hx_deflate_buffer(this->s,src->b,srcPos,dst->b,dstPos);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Compress_obj,execute,return )

void Compress_obj::setFlushMode( ::haxe::zip::FlushMode f){
            	HX_STACKFRAME(&_hx_pos_009433530f8e647c_38_setFlushMode)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(f,"f")
HXLINE(  38)		 ::Dynamic _hx_tmp = this->s;
HXDLIN(  38)		_hx_zip_set_flush_mode(_hx_tmp,::Std_obj::string(f));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Compress_obj,setFlushMode,(void))

void Compress_obj::close(){
            	HX_STACKFRAME(&_hx_pos_009433530f8e647c_42_close)
            	HX_STACK_THIS(this)
HXLINE(  42)		_hx_deflate_end(this->s);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Compress_obj,close,(void))

 ::haxe::io::Bytes Compress_obj::run( ::haxe::io::Bytes s,int level){
            	HX_GC_STACKFRAME(&_hx_pos_009433530f8e647c_45_run)
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(level,"level")
HXLINE(  46)		HX_VARI(  ::haxe::zip::Compress,c) =  ::haxe::zip::Compress_obj::__alloc( HX_CTX ,level);
HXLINE(  47)		c->setFlushMode(::haxe::zip::FlushMode_obj::FINISH_dyn());
HXLINE(  48)		HX_VARI(  ::haxe::io::Bytes,out) = ::haxe::io::Bytes_obj::alloc(_hx_deflate_bound(c->s,s->length));
HXLINE(  49)		HX_VARI(  ::Dynamic,r) = c->execute(s,(int)0,out,(int)0);
HXLINE(  50)		c->close();
HXLINE(  51)		bool _hx_tmp;
HXDLIN(  51)		if (!(!(( (bool)(r->__Field(HX_("done",82,f0,6d,42),hx::paccDynamic)) )))) {
HXLINE(  51)			_hx_tmp = (( (int)(r->__Field(HX_("read",56,4b,a7,4b),hx::paccDynamic)) ) != s->length);
            		}
            		else {
HXLINE(  51)			_hx_tmp = true;
            		}
HXDLIN(  51)		if (_hx_tmp) {
HXLINE(  52)			HX_STACK_DO_THROW(HX_("Compression failed",57,63,12,3c));
            		}
HXLINE(  53)		return out->sub((int)0,( (int)(r->__Field(HX_("write",df,6c,59,d0),hx::paccDynamic)) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Compress_obj,run,return )


hx::ObjectPtr< Compress_obj > Compress_obj::__new(int level) {
	hx::ObjectPtr< Compress_obj > __this = new Compress_obj();
	__this->__construct(level);
	return __this;
}

hx::ObjectPtr< Compress_obj > Compress_obj::__alloc(hx::Ctx *_hx_ctx,int level) {
	Compress_obj *__this = (Compress_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Compress_obj), true, "haxe.zip.Compress"));
	*(void **)__this = Compress_obj::_hx_vtable;
	__this->__construct(level);
	return __this;
}

Compress_obj::Compress_obj()
{
}

void Compress_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Compress);
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_END_CLASS();
}

void Compress_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(s,"s");
}

hx::Val Compress_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { return hx::Val( s); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return hx::Val( close_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return hx::Val( execute_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setFlushMode") ) { return hx::Val( setFlushMode_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool Compress_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { outValue = run_dyn(); return true; }
	}
	return false;
}

hx::Val Compress_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Compress_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("s","\x73","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Compress_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Compress_obj,s),HX_HCSTRING("s","\x73","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Compress_obj_sStaticStorageInfo = 0;
#endif

static ::String Compress_obj_sMemberFields[] = {
	HX_HCSTRING("s","\x73","\x00","\x00","\x00"),
	HX_HCSTRING("execute","\x35","\x0a","\x0d","\xcc"),
	HX_HCSTRING("setFlushMode","\x45","\xd4","\x07","\x63"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	::String(null()) };

static void Compress_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Compress_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Compress_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Compress_obj::__mClass,"__mClass");
};

#endif

hx::Class Compress_obj::__mClass;

static ::String Compress_obj_sStaticFields[] = {
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	::String(null())
};

void Compress_obj::__register()
{
	hx::Object *dummy = new Compress_obj;
	Compress_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.zip.Compress","\x37","\xc8","\x12","\x6f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Compress_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Compress_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Compress_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Compress_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Compress_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Compress_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Compress_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Compress_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace zip
