// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_626da793e26fdbd0_219_new,"flixel.util.FlxTimerManager","new",0x367f0c72,"flixel.util.FlxTimerManager.new","flixel/util/FlxTimer.hx",219,0x0a681e11)
HX_DEFINE_STACK_FRAME(_hx_pos_626da793e26fdbd0_240_destroy,"flixel.util.FlxTimerManager","destroy",0xb435da0c,"flixel.util.FlxTimerManager.destroy","flixel/util/FlxTimer.hx",240,0x0a681e11)
HX_DEFINE_STACK_FRAME(_hx_pos_626da793e26fdbd0_252_update,"flixel.util.FlxTimerManager","update",0xf26da137,"flixel.util.FlxTimerManager.update","flixel/util/FlxTimer.hx",252,0x0a681e11)
HX_DEFINE_STACK_FRAME(_hx_pos_626da793e26fdbd0_290_add,"flixel.util.FlxTimerManager","add",0x36752e33,"flixel.util.FlxTimerManager.add","flixel/util/FlxTimer.hx",290,0x0a681e11)
HX_DEFINE_STACK_FRAME(_hx_pos_626da793e26fdbd0_302_remove,"flixel.util.FlxTimerManager","remove",0x6ff0b772,"flixel.util.FlxTimerManager.remove","flixel/util/FlxTimer.hx",302,0x0a681e11)
HX_DEFINE_STACK_FRAME(_hx_pos_626da793e26fdbd0_311_completeAll,"flixel.util.FlxTimerManager","completeAll",0x4a72c7fa,"flixel.util.FlxTimerManager.completeAll","flixel/util/FlxTimer.hx",311,0x0a681e11)
HX_DEFINE_STACK_FRAME(_hx_pos_626da793e26fdbd0_333_clear,"flixel.util.FlxTimerManager","clear",0xccdb561f,"flixel.util.FlxTimerManager.clear","flixel/util/FlxTimer.hx",333,0x0a681e11)
HX_DEFINE_STACK_FRAME(_hx_pos_626da793e26fdbd0_344_forEach,"flixel.util.FlxTimerManager","forEach",0x546dd6bc,"flixel.util.FlxTimerManager.forEach","flixel/util/FlxTimer.hx",344,0x0a681e11)
namespace flixel{
namespace util{

void FlxTimerManager_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_626da793e26fdbd0_219_new)
            	HX_STACK_THIS(this)
HXLINE( 221)		this->_timers = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 228)		super::__construct();
HXLINE( 231)		this->set_visible(false);
HXLINE( 233)		::flixel::FlxG_obj::signals->stateSwitched->add(this->clear_dyn());
            	}

Dynamic FlxTimerManager_obj::__CreateEmpty() { return new FlxTimerManager_obj; }

void *FlxTimerManager_obj::_hx_vtable = 0;

Dynamic FlxTimerManager_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxTimerManager_obj > _hx_result = new FlxTimerManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxTimerManager_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x18b78d50) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x18b78d50;
	} else {
		return inClassId==(int)0x25a685e0;
	}
}

void FlxTimerManager_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_626da793e26fdbd0_240_destroy)
            	HX_STACK_THIS(this)
HXLINE( 241)		::flixel::util::FlxArrayUtil_obj::clearArray(this->_timers,null());
HXLINE( 242)		this->_timers = null();
HXLINE( 243)		::flixel::FlxG_obj::signals->stateSwitched->remove(this->clear_dyn());
HXLINE( 244)		this->super::destroy();
            	}


void FlxTimerManager_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_626da793e26fdbd0_252_update)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(elapsed,"elapsed")
HXLINE( 253)		HX_VARI( ::Array< ::Dynamic>,loopedTimers) = null();
HXLINE( 255)		{
HXLINE( 255)			HX_VARI( int,_g) = (int)0;
HXDLIN( 255)			HX_VARI( ::Array< ::Dynamic>,_g1) = this->_timers;
HXDLIN( 255)			while((_g < _g1->length)){
HXLINE( 255)				HX_VARI(  ::flixel::util::FlxTimer,timer) = _g1->__get(_g).StaticCast<  ::flixel::util::FlxTimer >();
HXDLIN( 255)				_g = (_g + (int)1);
HXLINE( 257)				bool _hx_tmp;
HXDLIN( 257)				bool _hx_tmp1;
HXDLIN( 257)				if (timer->active) {
HXLINE( 257)					_hx_tmp1 = !(timer->finished);
            				}
            				else {
HXLINE( 257)					_hx_tmp1 = false;
            				}
HXDLIN( 257)				if (_hx_tmp1) {
HXLINE( 257)					_hx_tmp = (timer->time >= (int)0);
            				}
            				else {
HXLINE( 257)					_hx_tmp = false;
            				}
HXDLIN( 257)				if (_hx_tmp) {
HXLINE( 259)					HX_VARI( int,timerLoops) = timer->_loopsCounter;
HXLINE( 260)					timer->update(elapsed);
HXLINE( 262)					if ((timerLoops != timer->_loopsCounter)) {
HXLINE( 264)						if (hx::IsNull( loopedTimers )) {
HXLINE( 265)							loopedTimers = ::Array_obj< ::Dynamic>::__new(0);
            						}
HXLINE( 267)						loopedTimers->push(timer);
            					}
            				}
            			}
            		}
HXLINE( 272)		if (hx::IsNotNull( loopedTimers )) {
HXLINE( 274)			while((loopedTimers->length > (int)0)){
HXLINE( 276)				loopedTimers->shift().StaticCast<  ::flixel::util::FlxTimer >()->onLoopFinished();
            			}
            		}
            	}


void FlxTimerManager_obj::add( ::flixel::util::FlxTimer Timer){
            	HX_STACKFRAME(&_hx_pos_626da793e26fdbd0_290_add)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Timer,"Timer")
HXLINE( 290)		this->_timers->push(Timer);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTimerManager_obj,add,(void))

void FlxTimerManager_obj::remove( ::flixel::util::FlxTimer Timer){
            	HX_STACKFRAME(&_hx_pos_626da793e26fdbd0_302_remove)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Timer,"Timer")
HXLINE( 302)		HX_VARI( ::Array< ::Dynamic>,array) = this->_timers;
HXDLIN( 302)		HX_VARI( int,index) = array->indexOf(Timer,null());
HXDLIN( 302)		if ((index != (int)-1)) {
HXLINE( 302)			array[index] = array->__get((array->length - (int)1)).StaticCast<  ::flixel::util::FlxTimer >();
HXDLIN( 302)			array->pop().StaticCast<  ::flixel::util::FlxTimer >();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTimerManager_obj,remove,(void))

void FlxTimerManager_obj::completeAll(){
            	HX_STACKFRAME(&_hx_pos_626da793e26fdbd0_311_completeAll)
            	HX_STACK_THIS(this)
HXLINE( 312)		HX_VARI( ::Array< ::Dynamic>,timersToFinish) = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 313)		{
HXLINE( 313)			HX_VARI( int,_g) = (int)0;
HXDLIN( 313)			HX_VARI( ::Array< ::Dynamic>,_g1) = this->_timers;
HXDLIN( 313)			while((_g < _g1->length)){
HXLINE( 313)				HX_VARI(  ::flixel::util::FlxTimer,timer) = _g1->__get(_g).StaticCast<  ::flixel::util::FlxTimer >();
HXDLIN( 313)				_g = (_g + (int)1);
HXLINE( 314)				bool _hx_tmp;
HXDLIN( 314)				if ((timer->loops > (int)0)) {
HXLINE( 314)					_hx_tmp = timer->active;
            				}
            				else {
HXLINE( 314)					_hx_tmp = false;
            				}
HXDLIN( 314)				if (_hx_tmp) {
HXLINE( 315)					timersToFinish->push(timer);
            				}
            			}
            		}
HXLINE( 317)		{
HXLINE( 317)			HX_VARI_NAME( int,_g2,"_g") = (int)0;
HXDLIN( 317)			while((_g2 < timersToFinish->length)){
HXLINE( 317)				HX_VARI_NAME(  ::flixel::util::FlxTimer,timer1,"timer") = timersToFinish->__get(_g2).StaticCast<  ::flixel::util::FlxTimer >();
HXDLIN( 317)				_g2 = (_g2 + (int)1);
HXLINE( 319)				while(!(timer1->finished)){
HXLINE( 321)					timer1->update((timer1->time - timer1->_timeCounter));
HXLINE( 322)					timer1->onLoopFinished();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimerManager_obj,completeAll,(void))

void FlxTimerManager_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_626da793e26fdbd0_333_clear)
            	HX_STACK_THIS(this)
HXLINE( 333)		::flixel::util::FlxArrayUtil_obj::clearArray(this->_timers,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimerManager_obj,clear,(void))

void FlxTimerManager_obj::forEach( ::Dynamic Function){
            	HX_STACKFRAME(&_hx_pos_626da793e26fdbd0_344_forEach)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Function,"Function")
HXLINE( 344)		HX_VARI( int,_g) = (int)0;
HXDLIN( 344)		HX_VARI( ::Array< ::Dynamic>,_g1) = this->_timers;
HXDLIN( 344)		while((_g < _g1->length)){
HXLINE( 344)			HX_VARI(  ::flixel::util::FlxTimer,timer) = _g1->__get(_g).StaticCast<  ::flixel::util::FlxTimer >();
HXDLIN( 344)			_g = (_g + (int)1);
HXLINE( 345)			Function(timer);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTimerManager_obj,forEach,(void))


hx::ObjectPtr< FlxTimerManager_obj > FlxTimerManager_obj::__new() {
	hx::ObjectPtr< FlxTimerManager_obj > __this = new FlxTimerManager_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< FlxTimerManager_obj > FlxTimerManager_obj::__alloc(hx::Ctx *_hx_ctx) {
	FlxTimerManager_obj *__this = (FlxTimerManager_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxTimerManager_obj), true, "flixel.util.FlxTimerManager"));
	*(void **)__this = FlxTimerManager_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxTimerManager_obj::FlxTimerManager_obj()
{
}

void FlxTimerManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTimerManager);
	HX_MARK_MEMBER_NAME(_timers,"_timers");
	 ::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTimerManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_timers,"_timers");
	 ::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

hx::Val FlxTimerManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return hx::Val( clear_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn()); }
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_timers") ) { return hx::Val( _timers); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn()); }
		if (HX_FIELD_EQ(inName,"forEach") ) { return hx::Val( forEach_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"completeAll") ) { return hx::Val( completeAll_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxTimerManager_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_timers") ) { _timers=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTimerManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_timers","\xad","\x1e","\x49","\x8d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxTimerManager_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTimerManager_obj,_timers),HX_HCSTRING("_timers","\xad","\x1e","\x49","\x8d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxTimerManager_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTimerManager_obj_sMemberFields[] = {
	HX_HCSTRING("_timers","\xad","\x1e","\x49","\x8d"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("completeAll","\xe8","\x29","\xb2","\x07"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("forEach","\xaa","\x29","\xbe","\xc4"),
	::String(null()) };

static void FlxTimerManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTimerManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxTimerManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTimerManager_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTimerManager_obj::__mClass;

void FlxTimerManager_obj::__register()
{
	hx::Object *dummy = new FlxTimerManager_obj;
	FlxTimerManager_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxTimerManager","\x80","\xab","\xc7","\xef");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxTimerManager_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxTimerManager_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTimerManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxTimerManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTimerManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTimerManager_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
