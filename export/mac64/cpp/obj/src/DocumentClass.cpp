// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_DocumentClass
#include <DocumentClass.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9453f8fd92a21d0a_217_new,"DocumentClass","new",0x4aeb0a6f,"DocumentClass.new","ApplicationMain.hx",217,0x0780ded5)
HX_DEFINE_STACK_FRAME(_hx_pos_9453f8fd92a21d0a_286_get_stage,"DocumentClass","get_stage",0xea357664,"DocumentClass.get_stage","ApplicationMain.hx",286,0x0780ded5)

void DocumentClass_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_9453f8fd92a21d0a_217_new)
            	HX_STACK_THIS(this)
HXLINE( 217)		super::__construct();
            	}

Dynamic DocumentClass_obj::__CreateEmpty() { return new DocumentClass_obj; }

void *DocumentClass_obj::_hx_vtable = 0;

Dynamic DocumentClass_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DocumentClass_obj > _hx_result = new DocumentClass_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DocumentClass_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x332f6459) {
		if (inClassId<=(int)0x25b00754) {
			if (inClassId<=(int)0x1e88cdcf) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1e88cdcf;
			} else {
				return inClassId==(int)0x25b00754;
			}
		} else {
			return inClassId==(int)0x306ae42a || inClassId==(int)0x332f6459;
		}
	} else {
		if (inClassId<=(int)0x3e03a6fd) {
			return inClassId==(int)0x3d2d7617 || inClassId==(int)0x3e03a6fd;
		} else {
			return inClassId==(int)0x5fcdb6d3;
		}
	}
}

 ::openfl::_legacy::display::Stage DocumentClass_obj::get_stage(){
            	HX_STACKFRAME(&_hx_pos_9453f8fd92a21d0a_286_get_stage)
            	HX_STACK_THIS(this)
HXLINE( 286)		return ::openfl::_legacy::Lib_obj::get_current()->get_stage();
            	}



hx::ObjectPtr< DocumentClass_obj > DocumentClass_obj::__new() {
	hx::ObjectPtr< DocumentClass_obj > __this = new DocumentClass_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< DocumentClass_obj > DocumentClass_obj::__alloc(hx::Ctx *_hx_ctx) {
	DocumentClass_obj *__this = (DocumentClass_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DocumentClass_obj), true, "DocumentClass"));
	*(void **)__this = DocumentClass_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DocumentClass_obj::DocumentClass_obj()
{
}

hx::Val DocumentClass_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"get_stage") ) { return hx::Val( get_stage_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *DocumentClass_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *DocumentClass_obj_sStaticStorageInfo = 0;
#endif

static ::String DocumentClass_obj_sMemberFields[] = {
	HX_HCSTRING("get_stage","\x15","\xc7","\xb4","\xc7"),
	::String(null()) };

static void DocumentClass_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DocumentClass_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DocumentClass_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DocumentClass_obj::__mClass,"__mClass");
};

#endif

hx::Class DocumentClass_obj::__mClass;

void DocumentClass_obj::__register()
{
	hx::Object *dummy = new DocumentClass_obj;
	DocumentClass_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("DocumentClass","\xfd","\xa6","\x03","\x3e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DocumentClass_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DocumentClass_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DocumentClass_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DocumentClass_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DocumentClass_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DocumentClass_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

