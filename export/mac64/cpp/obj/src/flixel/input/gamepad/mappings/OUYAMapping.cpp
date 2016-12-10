// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_OUYAID
#include <flixel/input/gamepad/id/OUYAID.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_OUYAMapping
#include <flixel/input/gamepad/mappings/OUYAMapping.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cb034decec2e0057_6_new,"flixel.input.gamepad.mappings.OUYAMapping","new",0x98fc348c,"flixel.input.gamepad.mappings.OUYAMapping.new","flixel/input/gamepad/mappings/OUYAMapping.hx",6,0xfd22efc2)
HX_DEFINE_STACK_FRAME(_hx_pos_cb034decec2e0057_17_initValues,"flixel.input.gamepad.mappings.OUYAMapping","initValues",0x29941866,"flixel.input.gamepad.mappings.OUYAMapping.initValues","flixel/input/gamepad/mappings/OUYAMapping.hx",17,0xfd22efc2)
HX_DEFINE_STACK_FRAME(_hx_pos_cb034decec2e0057_24_getID,"flixel.input.gamepad.mappings.OUYAMapping","getID",0xf00b591d,"flixel.input.gamepad.mappings.OUYAMapping.getID","flixel/input/gamepad/mappings/OUYAMapping.hx",24,0xfd22efc2)
HX_DEFINE_STACK_FRAME(_hx_pos_cb034decec2e0057_55_getRawID,"flixel.input.gamepad.mappings.OUYAMapping","getRawID",0x921e6ba1,"flixel.input.gamepad.mappings.OUYAMapping.getRawID","flixel/input/gamepad/mappings/OUYAMapping.hx",55,0xfd22efc2)
HX_DEFINE_STACK_FRAME(_hx_pos_cb034decec2e0057_87_axisIndexToRawID,"flixel.input.gamepad.mappings.OUYAMapping","axisIndexToRawID",0x899465eb,"flixel.input.gamepad.mappings.OUYAMapping.axisIndexToRawID","flixel/input/gamepad/mappings/OUYAMapping.hx",87,0xfd22efc2)
HX_DEFINE_STACK_FRAME(_hx_pos_cb034decec2e0057_9_boot,"flixel.input.gamepad.mappings.OUYAMapping","boot",0x3bcac686,"flixel.input.gamepad.mappings.OUYAMapping.boot","flixel/input/gamepad/mappings/OUYAMapping.hx",9,0xfd22efc2)
HX_DEFINE_STACK_FRAME(_hx_pos_cb034decec2e0057_10_boot,"flixel.input.gamepad.mappings.OUYAMapping","boot",0x3bcac686,"flixel.input.gamepad.mappings.OUYAMapping.boot","flixel/input/gamepad/mappings/OUYAMapping.hx",10,0xfd22efc2)
HX_DEFINE_STACK_FRAME(_hx_pos_cb034decec2e0057_12_boot,"flixel.input.gamepad.mappings.OUYAMapping","boot",0x3bcac686,"flixel.input.gamepad.mappings.OUYAMapping.boot","flixel/input/gamepad/mappings/OUYAMapping.hx",12,0xfd22efc2)
HX_DEFINE_STACK_FRAME(_hx_pos_cb034decec2e0057_13_boot,"flixel.input.gamepad.mappings.OUYAMapping","boot",0x3bcac686,"flixel.input.gamepad.mappings.OUYAMapping.boot","flixel/input/gamepad/mappings/OUYAMapping.hx",13,0xfd22efc2)
namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{

void OUYAMapping_obj::__construct( ::flixel::input::gamepad::FlxGamepadAttachment attachment){
            	HX_STACKFRAME(&_hx_pos_cb034decec2e0057_6_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(attachment,"attachment")
HXLINE(   6)		super::__construct(attachment);
            	}

Dynamic OUYAMapping_obj::__CreateEmpty() { return new OUYAMapping_obj; }

void *OUYAMapping_obj::_hx_vtable = 0;

Dynamic OUYAMapping_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< OUYAMapping_obj > _hx_result = new OUYAMapping_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool OUYAMapping_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4f98b2a8) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4f98b2a8;
	} else {
		return inClassId==(int)0x5f3facff;
	}
}

void OUYAMapping_obj::initValues(){
            	HX_STACKFRAME(&_hx_pos_cb034decec2e0057_17_initValues)
            	HX_STACK_THIS(this)
HXLINE(  18)		this->leftStick = ::flixel::input::gamepad::id::OUYAID_obj::LEFT_ANALOG_STICK;
HXLINE(  19)		this->rightStick = ::flixel::input::gamepad::id::OUYAID_obj::RIGHT_ANALOG_STICK;
            	}


int OUYAMapping_obj::getID(int rawID){
            	HX_STACKFRAME(&_hx_pos_cb034decec2e0057_24_getID)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rawID,"rawID")
HXLINE(  24)		switch((int)(rawID)){
            			case (int)0: {
HXLINE(  24)				return (int)0;
            			}
            			break;
            			case (int)1: {
HXLINE(  24)				return (int)1;
            			}
            			break;
            			case (int)2: {
HXLINE(  24)				return (int)10;
            			}
            			break;
            			case (int)3: {
HXLINE(  24)				return (int)2;
            			}
            			break;
            			case (int)4: {
HXLINE(  24)				return (int)3;
            			}
            			break;
            			case (int)6: {
HXLINE(  24)				return (int)4;
            			}
            			break;
            			case (int)7: {
HXLINE(  24)				return (int)5;
            			}
            			break;
            			case (int)8: {
HXLINE(  24)				return (int)17;
            			}
            			break;
            			case (int)9: {
HXLINE(  24)				return (int)18;
            			}
            			break;
            			case (int)10: {
HXLINE(  24)				return (int)8;
            			}
            			break;
            			case (int)11: {
HXLINE(  24)				return (int)9;
            			}
            			break;
            			case (int)13: {
HXLINE(  24)				return (int)13;
            			}
            			break;
            			case (int)14: {
HXLINE(  24)				return (int)14;
            			}
            			break;
            			case (int)15: {
HXLINE(  24)				return (int)12;
            			}
            			break;
            			case (int)16: {
HXLINE(  24)				return (int)11;
            			}
            			break;
            			default:{
HXLINE(  41)				if ((rawID == this->leftStick->rawUp)) {
HXLINE(  24)					return (int)34;
            				}
            				else {
HXLINE(  42)					if ((rawID == this->leftStick->rawDown)) {
HXLINE(  24)						return (int)36;
            					}
            					else {
HXLINE(  43)						if ((rawID == this->leftStick->rawLeft)) {
HXLINE(  24)							return (int)37;
            						}
            						else {
HXLINE(  44)							if ((rawID == this->leftStick->rawRight)) {
HXLINE(  24)								return (int)35;
            							}
            							else {
HXLINE(  45)								if ((rawID == this->rightStick->rawUp)) {
HXLINE(  24)									return (int)38;
            								}
            								else {
HXLINE(  46)									if ((rawID == this->rightStick->rawDown)) {
HXLINE(  24)										return (int)40;
            									}
            									else {
HXLINE(  47)										if ((rawID == this->rightStick->rawLeft)) {
HXLINE(  24)											return (int)41;
            										}
            										else {
HXLINE(  48)											if ((rawID == this->rightStick->rawRight)) {
HXLINE(  24)												return (int)39;
            											}
            											else {
HXLINE(  24)												return (int)-1;
            											}
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXDLIN(  24)		return null();
            	}


int OUYAMapping_obj::getRawID(int ID){
            	HX_STACKFRAME(&_hx_pos_cb034decec2e0057_55_getRawID)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE(  55)		switch((int)(ID)){
            			case (int)0: {
HXLINE(  55)				return (int)0;
            			}
            			break;
            			case (int)1: {
HXLINE(  55)				return (int)1;
            			}
            			break;
            			case (int)2: {
HXLINE(  55)				return (int)3;
            			}
            			break;
            			case (int)3: {
HXLINE(  55)				return (int)4;
            			}
            			break;
            			case (int)4: {
HXLINE(  55)				return (int)6;
            			}
            			break;
            			case (int)5: {
HXLINE(  55)				return (int)7;
            			}
            			break;
            			case (int)8: {
HXLINE(  55)				return (int)10;
            			}
            			break;
            			case (int)9: {
HXLINE(  55)				return (int)11;
            			}
            			break;
            			case (int)10: {
HXLINE(  55)				return (int)2;
            			}
            			break;
            			case (int)11: {
HXLINE(  55)				return (int)16;
            			}
            			break;
            			case (int)12: {
HXLINE(  55)				return (int)15;
            			}
            			break;
            			case (int)13: {
HXLINE(  55)				return (int)13;
            			}
            			break;
            			case (int)14: {
HXLINE(  55)				return (int)14;
            			}
            			break;
            			case (int)17: {
HXLINE(  55)				return (int)8;
            			}
            			break;
            			case (int)18: {
HXLINE(  55)				return (int)9;
            			}
            			break;
            			case (int)34: {
HXLINE(  55)				return ::flixel::input::gamepad::id::OUYAID_obj::LEFT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)35: {
HXLINE(  55)				return ::flixel::input::gamepad::id::OUYAID_obj::LEFT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)36: {
HXLINE(  55)				return ::flixel::input::gamepad::id::OUYAID_obj::LEFT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)37: {
HXLINE(  55)				return ::flixel::input::gamepad::id::OUYAID_obj::LEFT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			case (int)38: {
HXLINE(  55)				return ::flixel::input::gamepad::id::OUYAID_obj::RIGHT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)39: {
HXLINE(  55)				return ::flixel::input::gamepad::id::OUYAID_obj::RIGHT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)40: {
HXLINE(  55)				return ::flixel::input::gamepad::id::OUYAID_obj::RIGHT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)41: {
HXLINE(  55)				return ::flixel::input::gamepad::id::OUYAID_obj::RIGHT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			default:{
HXLINE(  55)				return (int)-1;
            			}
            		}
HXDLIN(  55)		return (int)0;
            	}


int OUYAMapping_obj::axisIndexToRawID(int axisID){
            	HX_STACKFRAME(&_hx_pos_cb034decec2e0057_87_axisIndexToRawID)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(axisID,"axisID")
HXLINE(  87)		if ((axisID == this->leftStick->x)) {
HXLINE(  87)			return (int)19;
            		}
            		else {
HXLINE(  88)			if ((axisID == this->leftStick->y)) {
HXLINE(  87)				return (int)20;
            			}
            			else {
HXLINE(  89)				if ((axisID == this->rightStick->x)) {
HXLINE(  87)					return (int)21;
            				}
            				else {
HXLINE(  90)					if ((axisID == this->rightStick->y)) {
HXLINE(  87)						return (int)22;
            					}
            					else {
HXLINE(  87)						return axisID;
            					}
            				}
            			}
            		}
HXDLIN(  87)		return (int)0;
            	}


int OUYAMapping_obj::LEFT_ANALOG_STICK_FAKE_X;

int OUYAMapping_obj::LEFT_ANALOG_STICK_FAKE_Y;

int OUYAMapping_obj::RIGHT_ANALOG_STICK_FAKE_X;

int OUYAMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y;


hx::ObjectPtr< OUYAMapping_obj > OUYAMapping_obj::__new( ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	hx::ObjectPtr< OUYAMapping_obj > __this = new OUYAMapping_obj();
	__this->__construct(attachment);
	return __this;
}

hx::ObjectPtr< OUYAMapping_obj > OUYAMapping_obj::__alloc(hx::Ctx *_hx_ctx, ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	OUYAMapping_obj *__this = (OUYAMapping_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(OUYAMapping_obj), true, "flixel.input.gamepad.mappings.OUYAMapping"));
	*(void **)__this = OUYAMapping_obj::_hx_vtable;
	__this->__construct(attachment);
	return __this;
}

OUYAMapping_obj::OUYAMapping_obj()
{
}

hx::Val OUYAMapping_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getID") ) { return hx::Val( getID_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getRawID") ) { return hx::Val( getRawID_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initValues") ) { return hx::Val( initValues_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"axisIndexToRawID") ) { return hx::Val( axisIndexToRawID_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *OUYAMapping_obj_sMemberStorageInfo = 0;
static hx::StaticInfo OUYAMapping_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &OUYAMapping_obj::LEFT_ANALOG_STICK_FAKE_X,HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_X","\x94","\xb3","\x65","\x38")},
	{hx::fsInt,(void *) &OUYAMapping_obj::LEFT_ANALOG_STICK_FAKE_Y,HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_Y","\x95","\xb3","\x65","\x38")},
	{hx::fsInt,(void *) &OUYAMapping_obj::RIGHT_ANALOG_STICK_FAKE_X,HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_X","\xc9","\x1f","\x02","\xa1")},
	{hx::fsInt,(void *) &OUYAMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y,HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_Y","\xca","\x1f","\x02","\xa1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String OUYAMapping_obj_sMemberFields[] = {
	HX_HCSTRING("initValues","\x12","\x5f","\xfc","\x53"),
	HX_HCSTRING("getID","\xf1","\x91","\x60","\x91"),
	HX_HCSTRING("getRawID","\x4d","\x6f","\xfd","\x43"),
	HX_HCSTRING("axisIndexToRawID","\x97","\xf5","\xe0","\x40"),
	::String(null()) };

static void OUYAMapping_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OUYAMapping_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(OUYAMapping_obj::LEFT_ANALOG_STICK_FAKE_X,"LEFT_ANALOG_STICK_FAKE_X");
	HX_MARK_MEMBER_NAME(OUYAMapping_obj::LEFT_ANALOG_STICK_FAKE_Y,"LEFT_ANALOG_STICK_FAKE_Y");
	HX_MARK_MEMBER_NAME(OUYAMapping_obj::RIGHT_ANALOG_STICK_FAKE_X,"RIGHT_ANALOG_STICK_FAKE_X");
	HX_MARK_MEMBER_NAME(OUYAMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y,"RIGHT_ANALOG_STICK_FAKE_Y");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OUYAMapping_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OUYAMapping_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(OUYAMapping_obj::LEFT_ANALOG_STICK_FAKE_X,"LEFT_ANALOG_STICK_FAKE_X");
	HX_VISIT_MEMBER_NAME(OUYAMapping_obj::LEFT_ANALOG_STICK_FAKE_Y,"LEFT_ANALOG_STICK_FAKE_Y");
	HX_VISIT_MEMBER_NAME(OUYAMapping_obj::RIGHT_ANALOG_STICK_FAKE_X,"RIGHT_ANALOG_STICK_FAKE_X");
	HX_VISIT_MEMBER_NAME(OUYAMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y,"RIGHT_ANALOG_STICK_FAKE_Y");
};

#endif

hx::Class OUYAMapping_obj::__mClass;

static ::String OUYAMapping_obj_sStaticFields[] = {
	HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_X","\x94","\xb3","\x65","\x38"),
	HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_Y","\x95","\xb3","\x65","\x38"),
	HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_X","\xc9","\x1f","\x02","\xa1"),
	HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_Y","\xca","\x1f","\x02","\xa1"),
	::String(null())
};

void OUYAMapping_obj::__register()
{
	hx::Object *dummy = new OUYAMapping_obj;
	OUYAMapping_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.mappings.OUYAMapping","\x9a","\x3e","\x94","\x1c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = OUYAMapping_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(OUYAMapping_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(OUYAMapping_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OUYAMapping_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OUYAMapping_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OUYAMapping_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OUYAMapping_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void OUYAMapping_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_cb034decec2e0057_9_boot)
HXLINE(   9)		LEFT_ANALOG_STICK_FAKE_X = (int)19;
            	}
{
            	HX_STACKFRAME(&_hx_pos_cb034decec2e0057_10_boot)
HXLINE(  10)		LEFT_ANALOG_STICK_FAKE_Y = (int)20;
            	}
{
            	HX_STACKFRAME(&_hx_pos_cb034decec2e0057_12_boot)
HXLINE(  12)		RIGHT_ANALOG_STICK_FAKE_X = (int)21;
            	}
{
            	HX_STACKFRAME(&_hx_pos_cb034decec2e0057_13_boot)
HXLINE(  13)		RIGHT_ANALOG_STICK_FAKE_Y = (int)22;
            	}
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings
