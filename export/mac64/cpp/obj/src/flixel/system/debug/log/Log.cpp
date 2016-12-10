// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicLog
#include <flixel/system/debug/GraphicLog.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_Log
#include <flixel/system/debug/log/Log.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
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
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9fa3e0ab86ae8b4a_23_new,"flixel.system.debug.log.Log","new",0x3aeefde4,"flixel.system.debug.log.Log.new","flixel/system/debug/log/Log.hx",23,0x223ade2e)
HX_DEFINE_STACK_FRAME(_hx_pos_9fa3e0ab86ae8b4a_43_destroy,"flixel.system.debug.log.Log","destroy",0x51a06c7e,"flixel.system.debug.log.Log.destroy","flixel/system/debug/log/Log.hx",43,0x223ade2e)
HX_DEFINE_STACK_FRAME(_hx_pos_9fa3e0ab86ae8b4a_61_add,"flixel.system.debug.log.Log","add",0x3ae51fa5,"flixel.system.debug.log.Log.add","flixel/system/debug/log/Log.hx",61,0x223ade2e)
HX_DEFINE_STACK_FRAME(_hx_pos_9fa3e0ab86ae8b4a_135_clear,"flixel.system.debug.log.Log","clear",0xc2400811,"flixel.system.debug.log.Log.clear","flixel/system/debug/log/Log.hx",135,0x223ade2e)
HX_DEFINE_STACK_FRAME(_hx_pos_9fa3e0ab86ae8b4a_147_updateSize,"flixel.system.debug.log.Log","updateSize",0x7fdfd666,"flixel.system.debug.log.Log.updateSize","flixel/system/debug/log/Log.hx",147,0x223ade2e)
HX_DEFINE_STACK_FRAME(_hx_pos_9fa3e0ab86ae8b4a_13_boot,"flixel.system.debug.log.Log","boot",0x4e482a2e,"flixel.system.debug.log.Log.boot","flixel/system/debug/log/Log.hx",13,0x223ade2e)
HX_DEFINE_STACK_FRAME(_hx_pos_9fa3e0ab86ae8b4a_14_boot,"flixel.system.debug.log.Log","boot",0x4e482a2e,"flixel.system.debug.log.Log.boot","flixel/system/debug/log/Log.hx",14,0x223ade2e)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace log{

void Log_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_9fa3e0ab86ae8b4a_23_new)
            	HX_STACK_THIS(this)
HXLINE(  24)		super::__construct(HX_("Log",64,0c,3a,00), ::flixel::_hx_system::debug::GraphicLog_obj::__alloc( HX_CTX ,(int)0,(int)0,null(),null()),null(),null(),null(),null(),null());
HXLINE(  26)		this->_text =  ::openfl::_legacy::text::TextField_obj::__alloc( HX_CTX );
HXLINE(  27)		this->_text->set_x((int)2);
HXLINE(  28)		this->_text->set_y((int)15);
HXLINE(  29)		this->_text->set_multiline(true);
HXLINE(  30)		this->_text->set_wordWrap(true);
HXLINE(  31)		this->_text->set_selectable(true);
HXLINE(  32)		this->_text->set_embedFonts(true);
HXLINE(  33)		this->_text->set_defaultTextFormat( ::openfl::_legacy::text::TextFormat_obj::__alloc( HX_CTX ,::flixel::_hx_system::FlxAssets_obj::FONT_DEBUGGER,(int)12,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null()));
HXLINE(  34)		this->addChild(this->_text);
HXLINE(  36)		this->_lines = ::Array_obj< ::String >::__new();
            	}

Dynamic Log_obj::__CreateEmpty() { return new Log_obj; }

void *Log_obj::_hx_vtable = 0;

Dynamic Log_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Log_obj > _hx_result = new Log_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Log_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x306ae42a) {
		if (inClassId<=(int)0x1e88cdcf) {
			if (inClassId<=(int)0x0d8c3a48) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0d8c3a48;
			} else {
				return inClassId==(int)0x1e88cdcf;
			}
		} else {
			return inClassId==(int)0x25b00754 || inClassId==(int)0x306ae42a;
		}
	} else {
		if (inClassId<=(int)0x5fcdb6d3) {
			return inClassId==(int)0x3d2d7617 || inClassId==(int)0x5fcdb6d3;
		} else {
			return inClassId==(int)0x619ca9b8;
		}
	}
}

void Log_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_9fa3e0ab86ae8b4a_43_destroy)
            	HX_STACK_THIS(this)
HXLINE(  44)		if (hx::IsNotNull( this->_text )) {
HXLINE(  46)			this->removeChild(this->_text);
HXLINE(  47)			this->_text = null();
            		}
HXLINE(  50)		this->_lines = null();
HXLINE(  51)		this->super::destroy();
            	}


bool Log_obj::add(::cpp::VirtualArray Data, ::flixel::_hx_system::debug::log::LogStyle Style,hx::Null< bool >  __o_FireOnce){
bool FireOnce = __o_FireOnce.Default(false);
            	HX_STACKFRAME(&_hx_pos_9fa3e0ab86ae8b4a_61_add)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Data,"Data")
            	HX_STACK_ARG(Style,"Style")
            	HX_STACK_ARG(FireOnce,"FireOnce")
HXLINE(  62)		if (hx::IsNull( Data )) {
HXLINE(  64)			return false;
            		}
HXLINE(  67)		HX_VARI( ::Array< ::String >,texts) = ::Array_obj< ::String >::__new();
HXLINE(  70)		{
HXLINE(  70)			HX_VARI( int,_g1) = (int)0;
HXDLIN(  70)			HX_VARI( int,_g) = Data->get_length();
HXDLIN(  70)			while((_g1 < _g)){
HXLINE(  70)				_g1 = (_g1 + (int)1);
HXDLIN(  70)				HX_VARI( int,i) = (_g1 - (int)1);
HXLINE(  72)				texts[i] = ::Std_obj::string(Data->__get(i));
HXLINE(  75)				texts[i] = ::StringTools_obj::htmlEscape(texts->__get(i),null());
            			}
            		}
HXLINE(  78)		HX_VARI_NAME( ::String,Style1,"Style") = Style->prefix;
HXDLIN(  78)		HX_VARI( ::String,text) = (Style1 + texts->join(HX_(" ",20,00,00,00)));
HXLINE(  82)		text = ::flixel::util::FlxStringUtil_obj::htmlFormat(text,Style->size,Style->color,Style->bold,Style->italic,Style->underlined);
HXLINE(  86)		if (FireOnce) {
HXLINE(  88)			HX_VARI_NAME( int,_g2,"_g") = (int)0;
HXDLIN(  88)			HX_VARI_NAME( ::Array< ::String >,_g11,"_g1") = this->_lines;
HXDLIN(  88)			while((_g2 < _g11->length)){
HXLINE(  88)				HX_VARI( ::String,line) = _g11->__get(_g2);
HXDLIN(  88)				_g2 = (_g2 + (int)1);
HXLINE(  90)				if ((text == line)) {
HXLINE(  92)					return false;
            				}
            			}
            		}
HXLINE(  98)		if ((this->_lines->length <= (int)0)) {
HXLINE( 100)			this->_text->set_text(HX_("",00,00,00,00));
            		}
HXLINE( 103)		this->_lines->push(text);
HXLINE( 105)		if ((this->_lines->length > (int)200)) {
HXLINE( 107)			this->_lines->shift();
HXLINE( 108)			HX_VARI( ::String,newText) = HX_("",00,00,00,00);
HXLINE( 109)			{
HXLINE( 109)				HX_VARI_NAME( int,_g12,"_g1") = (int)0;
HXDLIN( 109)				HX_VARI_NAME( int,_g3,"_g") = this->_lines->length;
HXDLIN( 109)				while((_g12 < _g3)){
HXLINE( 109)					_g12 = (_g12 + (int)1);
HXLINE( 111)					newText = (newText + (this->_lines->__get((_g12 - (int)1)) + HX_("<br>",b2,8d,f3,27)));
            				}
            			}
HXLINE( 115)			this->_text->set_htmlText(newText);
            		}
            		else {
HXLINE( 124)			HX_VARI_NAME(  ::openfl::_legacy::text::TextField,_g4,"_g") = this->_text;
HXDLIN( 124)			_g4->set_htmlText((_g4->get_htmlText() + (text + HX_("<br>",b2,8d,f3,27))));
            		}
HXLINE( 130)		 ::openfl::_legacy::text::TextField _hx_tmp = this->_text;
HXDLIN( 130)		_hx_tmp->set_scrollV(::Std_obj::_hx_int(this->_text->get_maxScrollV()));
HXLINE( 131)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Log_obj,add,return )

void Log_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_9fa3e0ab86ae8b4a_135_clear)
            	HX_STACK_THIS(this)
HXLINE( 136)		this->_text->set_text(HX_("",00,00,00,00));
HXLINE( 137)		this->_lines->removeRange((int)0,this->_lines->length);
HXLINE( 139)		this->_text->set_scrollV((int)0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Log_obj,clear,(void))

void Log_obj::updateSize(){
            	HX_STACKFRAME(&_hx_pos_9fa3e0ab86ae8b4a_147_updateSize)
            	HX_STACK_THIS(this)
HXLINE( 148)		this->super::updateSize();
HXLINE( 150)		this->_text->set_width((this->_width - (int)10));
HXLINE( 151)		this->_text->set_height((this->_height - (int)15));
            	}


int Log_obj::MAX_LOG_LINES;

::String Log_obj::LINE_BREAK;


hx::ObjectPtr< Log_obj > Log_obj::__new() {
	hx::ObjectPtr< Log_obj > __this = new Log_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Log_obj > Log_obj::__alloc(hx::Ctx *_hx_ctx) {
	Log_obj *__this = (Log_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Log_obj), true, "flixel.system.debug.log.Log"));
	*(void **)__this = Log_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Log_obj::Log_obj()
{
}

void Log_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Log);
	HX_MARK_MEMBER_NAME(_text,"_text");
	HX_MARK_MEMBER_NAME(_lines,"_lines");
	 ::flixel::_hx_system::debug::Window_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Log_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_text,"_text");
	HX_VISIT_MEMBER_NAME(_lines,"_lines");
	 ::flixel::_hx_system::debug::Window_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Log_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { return hx::Val( _text); }
		if (HX_FIELD_EQ(inName,"clear") ) { return hx::Val( clear_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_lines") ) { return hx::Val( _lines); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateSize") ) { return hx::Val( updateSize_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Log_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { _text=inValue.Cast<  ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_lines") ) { _lines=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Log_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_text","\x8c","\xe8","\x0a","\x00"));
	outFields->push(HX_HCSTRING("_lines","\x40","\x25","\xe9","\x70"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Log_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(Log_obj,_text),HX_HCSTRING("_text","\x8c","\xe8","\x0a","\x00")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Log_obj,_lines),HX_HCSTRING("_lines","\x40","\x25","\xe9","\x70")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Log_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Log_obj::MAX_LOG_LINES,HX_HCSTRING("MAX_LOG_LINES","\xc9","\x9f","\x1f","\x12")},
	{hx::fsString,(void *) &Log_obj::LINE_BREAK,HX_HCSTRING("LINE_BREAK","\xd4","\xf2","\x5b","\x12")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Log_obj_sMemberFields[] = {
	HX_HCSTRING("_text","\x8c","\xe8","\x0a","\x00"),
	HX_HCSTRING("_lines","\x40","\x25","\xe9","\x70"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("updateSize","\x6a","\x8b","\x08","\x05"),
	::String(null()) };

static void Log_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Log_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Log_obj::MAX_LOG_LINES,"MAX_LOG_LINES");
	HX_MARK_MEMBER_NAME(Log_obj::LINE_BREAK,"LINE_BREAK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Log_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Log_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Log_obj::MAX_LOG_LINES,"MAX_LOG_LINES");
	HX_VISIT_MEMBER_NAME(Log_obj::LINE_BREAK,"LINE_BREAK");
};

#endif

hx::Class Log_obj::__mClass;

static ::String Log_obj_sStaticFields[] = {
	HX_HCSTRING("MAX_LOG_LINES","\xc9","\x9f","\x1f","\x12"),
	HX_HCSTRING("LINE_BREAK","\xd4","\xf2","\x5b","\x12"),
	::String(null())
};

void Log_obj::__register()
{
	hx::Object *dummy = new Log_obj;
	Log_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.log.Log","\xf2","\x7b","\x61","\xb7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Log_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Log_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Log_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Log_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Log_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Log_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Log_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Log_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_9fa3e0ab86ae8b4a_13_boot)
HXLINE(  13)		MAX_LOG_LINES = (int)200;
            	}
{
            	HX_STACKFRAME(&_hx_pos_9fa3e0ab86ae8b4a_14_boot)
HXLINE(  14)		LINE_BREAK = HX_("<br>",b2,8d,f3,27);
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace log
