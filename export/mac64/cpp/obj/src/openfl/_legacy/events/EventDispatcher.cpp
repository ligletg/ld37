// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events__EventDispatcher_Listener
#include <openfl/_legacy/events/_EventDispatcher/Listener.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5ee43401573638d1_22_new,"openfl._legacy.events.EventDispatcher","new",0x6a7bf2c2,"openfl._legacy.events.EventDispatcher.new","openfl/_legacy/events/EventDispatcher.hx",22,0xebfd71ed)
HX_DEFINE_STACK_FRAME(_hx_pos_5ee43401573638d1_31_addEventListener,"openfl._legacy.events.EventDispatcher","addEventListener",0xd9a8942b,"openfl._legacy.events.EventDispatcher.addEventListener","openfl/_legacy/events/EventDispatcher.hx",31,0xebfd71ed)
HX_DEFINE_STACK_FRAME(_hx_pos_5ee43401573638d1_63_dispatchEvent,"openfl._legacy.events.EventDispatcher","dispatchEvent",0x51f077e2,"openfl._legacy.events.EventDispatcher.dispatchEvent","openfl/_legacy/events/EventDispatcher.hx",63,0xebfd71ed)
HX_DEFINE_STACK_FRAME(_hx_pos_5ee43401573638d1_121_hasEventListener,"openfl._legacy.events.EventDispatcher","hasEventListener",0xf52eb752,"openfl._legacy.events.EventDispatcher.hasEventListener","openfl/_legacy/events/EventDispatcher.hx",121,0xebfd71ed)
HX_DEFINE_STACK_FRAME(_hx_pos_5ee43401573638d1_129_removeEventListener,"openfl._legacy.events.EventDispatcher","removeEventListener",0x12d80e2c,"openfl._legacy.events.EventDispatcher.removeEventListener","openfl/_legacy/events/EventDispatcher.hx",129,0xebfd71ed)
HX_DEFINE_STACK_FRAME(_hx_pos_5ee43401573638d1_163_toString,"openfl._legacy.events.EventDispatcher","toString",0x4e84cb0a,"openfl._legacy.events.EventDispatcher.toString","openfl/_legacy/events/EventDispatcher.hx",163,0xebfd71ed)
HX_DEFINE_STACK_FRAME(_hx_pos_5ee43401573638d1_175_willTrigger,"openfl._legacy.events.EventDispatcher","willTrigger",0x7ac448a8,"openfl._legacy.events.EventDispatcher.willTrigger","openfl/_legacy/events/EventDispatcher.hx",175,0xebfd71ed)
HX_DEFINE_STACK_FRAME(_hx_pos_5ee43401573638d1_182___dispatchCompleteEvent,"openfl._legacy.events.EventDispatcher","__dispatchCompleteEvent",0x002ac5c9,"openfl._legacy.events.EventDispatcher.__dispatchCompleteEvent","openfl/_legacy/events/EventDispatcher.hx",182,0xebfd71ed)
HX_DEFINE_STACK_FRAME(_hx_pos_5ee43401573638d1_189___dispatchIOErrorEvent,"openfl._legacy.events.EventDispatcher","__dispatchIOErrorEvent",0x8653da70,"openfl._legacy.events.EventDispatcher.__dispatchIOErrorEvent","openfl/_legacy/events/EventDispatcher.hx",189,0xebfd71ed)
HX_DEFINE_STACK_FRAME(_hx_pos_5ee43401573638d1_196___sortByPriority,"openfl._legacy.events.EventDispatcher","__sortByPriority",0x571c1cd7,"openfl._legacy.events.EventDispatcher.__sortByPriority","openfl/_legacy/events/EventDispatcher.hx",196,0xebfd71ed)
namespace openfl{
namespace _legacy{
namespace events{

void EventDispatcher_obj::__construct(::Dynamic target){
            	HX_STACKFRAME(&_hx_pos_5ee43401573638d1_22_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(target,"target")
HXLINE(  22)		if (hx::IsNotNull( target )) {
HXLINE(  24)			this->_hx___targetDispatcher = target;
            		}
            	}

Dynamic EventDispatcher_obj::__CreateEmpty() { return new EventDispatcher_obj; }

void *EventDispatcher_obj::_hx_vtable = 0;

Dynamic EventDispatcher_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< EventDispatcher_obj > _hx_result = new EventDispatcher_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool EventDispatcher_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x25b00754;
}

static ::openfl::_legacy::events::IEventDispatcher_obj _hx_openfl__legacy_events_EventDispatcher__hx_openfl__legacy_events_IEventDispatcher= {
	( void (hx::Object::*)(::String, ::Dynamic,hx::Null< bool > ,hx::Null< int > ,hx::Null< bool > ))&::openfl::_legacy::events::EventDispatcher_obj::addEventListener,
	( bool (hx::Object::*)( ::openfl::_legacy::events::Event))&::openfl::_legacy::events::EventDispatcher_obj::dispatchEvent,
	( bool (hx::Object::*)(::String))&::openfl::_legacy::events::EventDispatcher_obj::hasEventListener,
	( void (hx::Object::*)(::String, ::Dynamic,hx::Null< bool > ))&::openfl::_legacy::events::EventDispatcher_obj::removeEventListener,
	( bool (hx::Object::*)(::String))&::openfl::_legacy::events::EventDispatcher_obj::willTrigger,
};

void *EventDispatcher_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x4cbe6489: return &_hx_openfl__legacy_events_EventDispatcher__hx_openfl__legacy_events_IEventDispatcher;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void EventDispatcher_obj::addEventListener(::String type, ::Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_5ee43401573638d1_31_addEventListener)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(listener,"listener")
            	HX_STACK_ARG(useCapture,"useCapture")
            	HX_STACK_ARG(priority,"priority")
            	HX_STACK_ARG(useWeakReference,"useWeakReference")
HXLINE(  33)		if (hx::IsNull( this->_hx___eventMap )) {
HXLINE(  35)			this->_hx___eventMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  39)		if (!(this->_hx___eventMap->exists(type))) {
HXLINE(  41)			HX_VARI( ::Array< ::Dynamic>,list) = ::Array_obj< ::Dynamic>::__new();
HXLINE(  42)			list->push( ::openfl::_legacy::events::_EventDispatcher::Listener_obj::__alloc( HX_CTX ,listener,useCapture,priority));
HXLINE(  43)			this->_hx___eventMap->set(type,list);
            		}
            		else {
HXLINE(  47)			HX_VARI_NAME( ::Array< ::Dynamic>,list1,"list") = ( (::Array< ::Dynamic>)(this->_hx___eventMap->get(type)) );
HXLINE(  49)			{
HXLINE(  49)				HX_VARI( int,_g1) = (int)0;
HXDLIN(  49)				HX_VARI( int,_g) = list1->length;
HXDLIN(  49)				while((_g1 < _g)){
HXLINE(  49)					_g1 = (_g1 + (int)1);
HXLINE(  51)					if (::Reflect_obj::compareMethods(list1->__get((_g1 - (int)1)).StaticCast<  ::openfl::_legacy::events::_EventDispatcher::Listener >()->callback,listener)) {
HXLINE(  51)						return;
            					}
            				}
            			}
HXLINE(  55)			list1->push( ::openfl::_legacy::events::_EventDispatcher::Listener_obj::__alloc( HX_CTX ,listener,useCapture,priority));
HXLINE(  56)			list1->sort(::openfl::_legacy::events::EventDispatcher_obj::_hx___sortByPriority_dyn());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(EventDispatcher_obj,addEventListener,(void))

bool EventDispatcher_obj::dispatchEvent( ::openfl::_legacy::events::Event event){
            	HX_STACKFRAME(&_hx_pos_5ee43401573638d1_63_dispatchEvent)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(event,"event")
HXLINE(  65)		bool _hx_tmp;
HXDLIN(  65)		if (hx::IsNotNull( this->_hx___eventMap )) {
HXLINE(  65)			_hx_tmp = hx::IsNull( event );
            		}
            		else {
HXLINE(  65)			_hx_tmp = true;
            		}
HXDLIN(  65)		if (_hx_tmp) {
HXLINE(  65)			return false;
            		}
HXLINE(  67)		HX_VARI( ::Array< ::Dynamic>,list) = ( (::Array< ::Dynamic>)(this->_hx___eventMap->get(event->get_type())) );
HXLINE(  69)		if (hx::IsNull( list )) {
HXLINE(  69)			return false;
            		}
HXLINE(  71)		if (hx::IsNull( event->get_target() )) {
HXLINE(  73)			if (hx::IsNotNull( this->_hx___targetDispatcher )) {
HXLINE(  75)				event->set_target(this->_hx___targetDispatcher);
            			}
            			else {
HXLINE(  79)				event->set_target(hx::ObjectPtr<OBJ_>(this));
            			}
            		}
HXLINE(  85)		event->set_currentTarget(hx::ObjectPtr<OBJ_>(this));
HXLINE(  87)		HX_VARI( bool,capture) = (event->get_eventPhase() == (int)1);
HXLINE(  88)		HX_VARI( int,index) = (int)0;
HXLINE(  89)		HX_VAR(  ::openfl::_legacy::events::_EventDispatcher::Listener,listener);
HXLINE(  91)		while((index < list->length)){
HXLINE(  93)			listener = list->__get(index).StaticCast<  ::openfl::_legacy::events::_EventDispatcher::Listener >();
HXLINE(  95)			if ((listener->useCapture == capture)) {
HXLINE(  98)				listener->callback(event);
HXLINE( 100)				if (event->_hx___isCancelledNow) {
HXLINE( 102)					return true;
            				}
            			}
HXLINE( 108)			if (hx::IsEq( listener,list->__get(index).StaticCast<  ::openfl::_legacy::events::_EventDispatcher::Listener >() )) {
HXLINE( 110)				index = (index + (int)1);
            			}
            		}
HXLINE( 116)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,dispatchEvent,return )

bool EventDispatcher_obj::hasEventListener(::String type){
            	HX_STACKFRAME(&_hx_pos_5ee43401573638d1_121_hasEventListener)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
HXLINE( 123)		if (hx::IsNull( this->_hx___eventMap )) {
HXLINE( 123)			return false;
            		}
HXLINE( 124)		return this->_hx___eventMap->exists(type);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,hasEventListener,return )

void EventDispatcher_obj::removeEventListener(::String type, ::Dynamic listener,hx::Null< bool >  __o_capture){
bool capture = __o_capture.Default(false);
            	HX_STACKFRAME(&_hx_pos_5ee43401573638d1_129_removeEventListener)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(listener,"listener")
            	HX_STACK_ARG(capture,"capture")
HXLINE( 131)		if (hx::IsNull( this->_hx___eventMap )) {
HXLINE( 131)			return;
            		}
HXLINE( 133)		HX_VARI( ::Array< ::Dynamic>,list) = ( (::Array< ::Dynamic>)(this->_hx___eventMap->get(type)) );
HXLINE( 135)		if (hx::IsNull( list )) {
HXLINE( 135)			return;
            		}
HXLINE( 137)		{
HXLINE( 137)			HX_VARI( int,_g1) = (int)0;
HXDLIN( 137)			HX_VARI( int,_g) = list->length;
HXDLIN( 137)			while((_g1 < _g)){
HXLINE( 137)				_g1 = (_g1 + (int)1);
HXDLIN( 137)				HX_VARI( int,i) = (_g1 - (int)1);
HXLINE( 139)				if (list->__get(i).StaticCast<  ::openfl::_legacy::events::_EventDispatcher::Listener >()->match(listener,capture)) {
HXLINE( 141)					list->removeRange(i,(int)1);
HXLINE( 142)					goto _hx_goto_6;
            				}
            			}
            			_hx_goto_6:;
            		}
HXLINE( 148)		if ((list->length == (int)0)) {
HXLINE( 150)			this->_hx___eventMap->remove(type);
            		}
HXLINE( 154)		if (!(( (bool)(this->_hx___eventMap->iterator()->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) ))) {
HXLINE( 156)			this->_hx___eventMap = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(EventDispatcher_obj,removeEventListener,(void))

::String EventDispatcher_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_5ee43401573638d1_163_toString)
            	HX_STACK_THIS(this)
HXLINE( 165)		HX_VARI( ::String,full) = ::Type_obj::getClassName(::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this)));
HXLINE( 166)		HX_VARI_NAME( ::String,_hx_short,"short") = ( (::String)(full.split(HX_(".",2e,00,00,00))->pop()) );
HXLINE( 168)		return ((HX_("[object ",86,f9,3d,d7) + _hx_short) + HX_("]",5d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(EventDispatcher_obj,toString,return )

bool EventDispatcher_obj::willTrigger(::String type){
            	HX_STACKFRAME(&_hx_pos_5ee43401573638d1_175_willTrigger)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
HXLINE( 175)		return this->hasEventListener(type);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,willTrigger,return )

void EventDispatcher_obj::_hx___dispatchCompleteEvent(){
            	HX_GC_STACKFRAME(&_hx_pos_5ee43401573638d1_182___dispatchCompleteEvent)
            	HX_STACK_THIS(this)
HXLINE( 182)		this->dispatchEvent( ::openfl::_legacy::events::Event_obj::__alloc( HX_CTX ,::openfl::_legacy::events::Event_obj::COMPLETE,null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(EventDispatcher_obj,_hx___dispatchCompleteEvent,(void))

void EventDispatcher_obj::_hx___dispatchIOErrorEvent(){
            	HX_GC_STACKFRAME(&_hx_pos_5ee43401573638d1_189___dispatchIOErrorEvent)
            	HX_STACK_THIS(this)
HXLINE( 189)		this->dispatchEvent( ::openfl::events::IOErrorEvent_obj::__alloc( HX_CTX ,HX_("ioError",02,fe,41,76),null(),null(),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(EventDispatcher_obj,_hx___dispatchIOErrorEvent,(void))

int EventDispatcher_obj::_hx___sortByPriority( ::openfl::_legacy::events::_EventDispatcher::Listener l1, ::openfl::_legacy::events::_EventDispatcher::Listener l2){
            	HX_STACKFRAME(&_hx_pos_5ee43401573638d1_196___sortByPriority)
            	HX_STACK_ARG(l1,"l1")
            	HX_STACK_ARG(l2,"l2")
HXLINE( 196)		if ((l1->priority == l2->priority)) {
HXLINE( 196)			return (int)0;
            		}
            		else {
HXLINE( 196)			if ((l1->priority > l2->priority)) {
HXLINE( 196)				return (int)-1;
            			}
            			else {
HXLINE( 196)				return (int)1;
            			}
            		}
HXDLIN( 196)		return (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(EventDispatcher_obj,_hx___sortByPriority,return )


hx::ObjectPtr< EventDispatcher_obj > EventDispatcher_obj::__new(::Dynamic target) {
	hx::ObjectPtr< EventDispatcher_obj > __this = new EventDispatcher_obj();
	__this->__construct(target);
	return __this;
}

hx::ObjectPtr< EventDispatcher_obj > EventDispatcher_obj::__alloc(hx::Ctx *_hx_ctx,::Dynamic target) {
	EventDispatcher_obj *__this = (EventDispatcher_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(EventDispatcher_obj), true, "openfl._legacy.events.EventDispatcher"));
	*(void **)__this = EventDispatcher_obj::_hx_vtable;
	__this->__construct(target);
	return __this;
}

EventDispatcher_obj::EventDispatcher_obj()
{
}

void EventDispatcher_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EventDispatcher);
	HX_MARK_MEMBER_NAME(_hx___targetDispatcher,"__targetDispatcher");
	HX_MARK_MEMBER_NAME(_hx___eventMap,"__eventMap");
	HX_MARK_END_CLASS();
}

void EventDispatcher_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___targetDispatcher,"__targetDispatcher");
	HX_VISIT_MEMBER_NAME(_hx___eventMap,"__eventMap");
}

hx::Val EventDispatcher_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__eventMap") ) { return hx::Val( _hx___eventMap); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"willTrigger") ) { return hx::Val( willTrigger_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return hx::Val( dispatchEvent_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return hx::Val( addEventListener_dyn()); }
		if (HX_FIELD_EQ(inName,"hasEventListener") ) { return hx::Val( hasEventListener_dyn()); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__targetDispatcher") ) { return hx::Val( _hx___targetDispatcher); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return hx::Val( removeEventListener_dyn()); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__dispatchIOErrorEvent") ) { return hx::Val( _hx___dispatchIOErrorEvent_dyn()); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__dispatchCompleteEvent") ) { return hx::Val( _hx___dispatchCompleteEvent_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool EventDispatcher_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"__sortByPriority") ) { outValue = _hx___sortByPriority_dyn(); return true; }
	}
	return false;
}

hx::Val EventDispatcher_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__eventMap") ) { _hx___eventMap=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__targetDispatcher") ) { _hx___targetDispatcher=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EventDispatcher_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__targetDispatcher","\x78","\x03","\x5d","\x88"));
	outFields->push(HX_HCSTRING("__eventMap","\xc2","\xf9","\x0a","\x64"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo EventDispatcher_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::events::IEventDispatcher*/ ,(int)offsetof(EventDispatcher_obj,_hx___targetDispatcher),HX_HCSTRING("__targetDispatcher","\x78","\x03","\x5d","\x88")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(EventDispatcher_obj,_hx___eventMap),HX_HCSTRING("__eventMap","\xc2","\xf9","\x0a","\x64")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *EventDispatcher_obj_sStaticStorageInfo = 0;
#endif

static ::String EventDispatcher_obj_sMemberFields[] = {
	HX_HCSTRING("__targetDispatcher","\x78","\x03","\x5d","\x88"),
	HX_HCSTRING("__eventMap","\xc2","\xf9","\x0a","\x64"),
	HX_HCSTRING("addEventListener","\xcd","\x0b","\x64","\xf1"),
	HX_HCSTRING("dispatchEvent","\x00","\xc7","\x64","\xc6"),
	HX_HCSTRING("hasEventListener","\xf4","\x2e","\xea","\x0c"),
	HX_HCSTRING("removeEventListener","\xca","\x87","\x75","\x55"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("willTrigger","\x46","\xf4","\x3f","\xd8"),
	HX_HCSTRING("__dispatchCompleteEvent","\x67","\x66","\xc8","\xca"),
	HX_HCSTRING("__dispatchIOErrorEvent","\x92","\xb7","\x17","\x67"),
	::String(null()) };

static void EventDispatcher_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventDispatcher_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EventDispatcher_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventDispatcher_obj::__mClass,"__mClass");
};

#endif

hx::Class EventDispatcher_obj::__mClass;

static ::String EventDispatcher_obj_sStaticFields[] = {
	HX_HCSTRING("__sortByPriority","\x79","\x94","\xd7","\x6e"),
	::String(null())
};

void EventDispatcher_obj::__register()
{
	hx::Object *dummy = new EventDispatcher_obj;
	EventDispatcher_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.events.EventDispatcher","\xd0","\x29","\x1f","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EventDispatcher_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = EventDispatcher_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(EventDispatcher_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(EventDispatcher_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EventDispatcher_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EventDispatcher_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EventDispatcher_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EventDispatcher_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace events
