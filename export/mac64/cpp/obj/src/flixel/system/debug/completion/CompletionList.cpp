// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_system_debug_completion_CompletionList
#include <flixel/system/debug/completion/CompletionList.h>
#endif
#ifndef INCLUDED_flixel_system_debug_completion_CompletionListEntry
#include <flixel/system/debug/completion/CompletionListEntry.h>
#endif
#ifndef INCLUDED_flixel_system_debug_completion_CompletionListScrollBar
#include <flixel/system/debug/completion/CompletionListScrollBar.h>
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
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_KeyboardEvent
#include <openfl/_legacy/events/KeyboardEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_26f69c8799845277_10_new,"flixel.system.debug.completion.CompletionList","new",0x2d62f836,"flixel.system.debug.completion.CompletionList.new","flixel/system/debug/completion/CompletionList.hx",10,0x5d64787a)
HX_DEFINE_STACK_FRAME(_hx_pos_26f69c8799845277_44_show,"flixel.system.debug.completion.CompletionList","show",0x8c868867,"flixel.system.debug.completion.CompletionList.show","flixel/system/debug/completion/CompletionList.hx",44,0x5d64787a)
HX_DEFINE_STACK_FRAME(_hx_pos_26f69c8799845277_55_setY,"flixel.system.debug.completion.CompletionList","setY",0x8c8445e1,"flixel.system.debug.completion.CompletionList.setY","flixel/system/debug/completion/CompletionList.hx",55,0x5d64787a)
HX_DEFINE_STACK_FRAME(_hx_pos_26f69c8799845277_59_close,"flixel.system.debug.completion.CompletionList","close",0x356c610e,"flixel.system.debug.completion.CompletionList.close","flixel/system/debug/completion/CompletionList.hx",59,0x5d64787a)
HX_DEFINE_STACK_FRAME(_hx_pos_26f69c8799845277_69_createPopupEntries,"flixel.system.debug.completion.CompletionList","createPopupEntries",0x28517e8a,"flixel.system.debug.completion.CompletionList.createPopupEntries","flixel/system/debug/completion/CompletionList.hx",69,0x5d64787a)
HX_DEFINE_STACK_FRAME(_hx_pos_26f69c8799845277_79_createScrollBar,"flixel.system.debug.completion.CompletionList","createScrollBar",0x8887a200,"flixel.system.debug.completion.CompletionList.createScrollBar","flixel/system/debug/completion/CompletionList.hx",79,0x5d64787a)
HX_DEFINE_STACK_FRAME(_hx_pos_26f69c8799845277_86_onKeyDown,"flixel.system.debug.completion.CompletionList","onKeyDown",0xde49ce98,"flixel.system.debug.completion.CompletionList.onKeyDown","flixel/system/debug/completion/CompletionList.hx",86,0x5d64787a)
HX_DEFINE_STACK_FRAME(_hx_pos_26f69c8799845277_113_updateIndices,"flixel.system.debug.completion.CompletionList","updateIndices",0x00d63b74,"flixel.system.debug.completion.CompletionList.updateIndices","flixel/system/debug/completion/CompletionList.hx",113,0x5d64787a)
HX_DEFINE_STACK_FRAME(_hx_pos_26f69c8799845277_135_bound,"flixel.system.debug.completion.CompletionList","bound",0xa405f994,"flixel.system.debug.completion.CompletionList.bound","flixel/system/debug/completion/CompletionList.hx",135,0x5d64787a)
HX_DEFINE_STACK_FRAME(_hx_pos_26f69c8799845277_139_updateEntries,"flixel.system.debug.completion.CompletionList","updateEntries",0x96e1219d,"flixel.system.debug.completion.CompletionList.updateEntries","flixel/system/debug/completion/CompletionList.hx",139,0x5d64787a)
HX_DEFINE_STACK_FRAME(_hx_pos_26f69c8799845277_147_updateLabels,"flixel.system.debug.completion.CompletionList","updateLabels",0x98d4fc52,"flixel.system.debug.completion.CompletionList.updateLabels","flixel/system/debug/completion/CompletionList.hx",147,0x5d64787a)
HX_DEFINE_STACK_FRAME(_hx_pos_26f69c8799845277_157_updateSelectedItem,"flixel.system.debug.completion.CompletionList","updateSelectedItem",0x02be39a1,"flixel.system.debug.completion.CompletionList.updateSelectedItem","flixel/system/debug/completion/CompletionList.hx",157,0x5d64787a)
HX_DEFINE_STACK_FRAME(_hx_pos_26f69c8799845277_167_setItems,"flixel.system.debug.completion.CompletionList","setItems",0x6843c568,"flixel.system.debug.completion.CompletionList.setItems","flixel/system/debug/completion/CompletionList.hx",167,0x5d64787a)
HX_DEFINE_STACK_FRAME(_hx_pos_26f69c8799845277_188_filterItems,"flixel.system.debug.completion.CompletionList","filterItems",0xe29aeefe,"flixel.system.debug.completion.CompletionList.filterItems","flixel/system/debug/completion/CompletionList.hx",188,0x5d64787a)
HX_DEFINE_STACK_FRAME(_hx_pos_26f69c8799845277_182_filterItems,"flixel.system.debug.completion.CompletionList","filterItems",0xe29aeefe,"flixel.system.debug.completion.CompletionList.filterItems","flixel/system/debug/completion/CompletionList.hx",182,0x5d64787a)
HX_DEFINE_STACK_FRAME(_hx_pos_26f69c8799845277_203_sortItems,"flixel.system.debug.completion.CompletionList","sortItems",0x34d82c18,"flixel.system.debug.completion.CompletionList.sortItems","flixel/system/debug/completion/CompletionList.hx",203,0x5d64787a)
HX_DEFINE_STACK_FRAME(_hx_pos_26f69c8799845277_198_sortItems,"flixel.system.debug.completion.CompletionList","sortItems",0x34d82c18,"flixel.system.debug.completion.CompletionList.sortItems","flixel/system/debug/completion/CompletionList.hx",198,0x5d64787a)
HX_DEFINE_STACK_FRAME(_hx_pos_26f69c8799845277_222_startsWithExt,"flixel.system.debug.completion.CompletionList","startsWithExt",0x5b78f7c0,"flixel.system.debug.completion.CompletionList.startsWithExt","flixel/system/debug/completion/CompletionList.hx",222,0x5d64787a)
HX_DEFINE_STACK_FRAME(_hx_pos_26f69c8799845277_231_set_filter,"flixel.system.debug.completion.CompletionList","set_filter",0x1b994cdf,"flixel.system.debug.completion.CompletionList.set_filter","flixel/system/debug/completion/CompletionList.hx",231,0x5d64787a)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace completion{

void CompletionList_obj::__construct(int capacity){
            	HX_STACKFRAME(&_hx_pos_26f69c8799845277_10_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(capacity,"capacity")
HXLINE(  24)		this->upperVisibleIndex = (int)0;
HXLINE(  23)		this->lowerVisibleIndex = (int)0;
HXLINE(  22)		this->selectedIndex = (int)0;
HXLINE(  20)		this->entries = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  30)		super::__construct();
HXLINE(  32)		this->set_visible(false);
HXLINE(  33)		this->upperVisibleIndex = (capacity - (int)1);
HXLINE(  34)		this->actualHeight = (capacity * (int)20);
HXLINE(  36)		this->createPopupEntries(capacity);
HXLINE(  37)		this->createScrollBar();
HXLINE(  38)		this->updateSelectedItem();
HXLINE(  40)		::openfl::_legacy::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::_legacy::events::KeyboardEvent_obj::KEY_DOWN,this->onKeyDown_dyn(),null(),null(),null());
            	}

Dynamic CompletionList_obj::__CreateEmpty() { return new CompletionList_obj; }

void *CompletionList_obj::_hx_vtable = 0;

Dynamic CompletionList_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CompletionList_obj > _hx_result = new CompletionList_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CompletionList_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x306ae42a) {
		if (inClassId<=(int)0x25b00754) {
			if (inClassId<=(int)0x1e88cdcf) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1e88cdcf;
			} else {
				return inClassId==(int)0x25b00754;
			}
		} else {
			return inClassId==(int)0x306ae42a;
		}
	} else {
		if (inClassId<=(int)0x3d2d7617) {
			return inClassId==(int)0x3815113e || inClassId==(int)0x3d2d7617;
		} else {
			return inClassId==(int)0x5fcdb6d3;
		}
	}
}

void CompletionList_obj::show(Float x,::Array< ::String > items){
            	HX_STACKFRAME(&_hx_pos_26f69c8799845277_44_show)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(items,"items")
HXLINE(  45)		this->set_visible(true);
HXLINE(  46)		this->set_x(x);
HXLINE(  47)		this->originalItems = items;
HXLINE(  48)		this->set_filter(HX_("",00,00,00,00));
HXLINE(  50)		this->updateEntries();
            	}


HX_DEFINE_DYNAMIC_FUNC2(CompletionList_obj,show,(void))

void CompletionList_obj::setY(Float y){
            	HX_STACKFRAME(&_hx_pos_26f69c8799845277_55_setY)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(y,"y")
HXLINE(  55)		this->set_y((y - this->actualHeight));
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompletionList_obj,setY,(void))

void CompletionList_obj::close(){
            	HX_STACKFRAME(&_hx_pos_26f69c8799845277_59_close)
            	HX_STACK_THIS(this)
HXLINE(  60)		this->set_visible(false);
HXLINE(  61)		this->set_filter(null());
HXLINE(  63)		if (hx::IsNotNull( this->closed )) {
HXLINE(  64)			this->closed();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompletionList_obj,close,(void))

void CompletionList_obj::createPopupEntries(int amount){
            	HX_GC_STACKFRAME(&_hx_pos_26f69c8799845277_69_createPopupEntries)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(amount,"amount")
HXLINE(  69)		HX_VARI( int,_g1) = (int)0;
HXDLIN(  69)		while((_g1 < amount)){
HXLINE(  69)			_g1 = (_g1 + (int)1);
HXLINE(  71)			HX_VARI(  ::flixel::_hx_system::debug::completion::CompletionListEntry,entry) =  ::flixel::_hx_system::debug::completion::CompletionListEntry_obj::__alloc( HX_CTX );
HXLINE(  72)			this->entries->push(entry);
HXLINE(  73)			this->addChild(entry);
HXLINE(  74)			entry->set_y(((int)20 * (_g1 - (int)1)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompletionList_obj,createPopupEntries,(void))

void CompletionList_obj::createScrollBar(){
            	HX_GC_STACKFRAME(&_hx_pos_26f69c8799845277_79_createScrollBar)
            	HX_STACK_THIS(this)
HXLINE(  80)		this->scrollBar =  ::flixel::_hx_system::debug::completion::CompletionListScrollBar_obj::__alloc( HX_CTX ,(int)150,(int)0,(int)5,this->actualHeight);
HXLINE(  82)		this->addChild(this->scrollBar);
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompletionList_obj,createScrollBar,(void))

void CompletionList_obj::onKeyDown( ::openfl::_legacy::events::KeyboardEvent e){
            	HX_STACKFRAME(&_hx_pos_26f69c8799845277_86_onKeyDown)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(e,"e")
HXLINE(  87)		if (!(this->get_visible())) {
HXLINE(  88)			return;
            		}
HXLINE(  90)		switch((int)(e->keyCode)){
            			case (int)13: {
HXLINE(  99)				if (hx::IsNotNull( this->completed )) {
HXLINE( 100)					this->completed(this->items->__get(this->selectedIndex));
            				}
HXLINE( 101)				this->close();
HXLINE( 102)				return;
            			}
            			break;
            			case (int)27: {
HXLINE( 105)				this->close();
HXLINE( 106)				return;
            			}
            			break;
            			case (int)38: {
HXLINE(  96)				this->updateIndices((int)-1);
            			}
            			break;
            			case (int)40: {
HXLINE(  93)				this->updateIndices((int)1);
            			}
            			break;
            		}
HXLINE( 109)		this->updateEntries();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompletionList_obj,onKeyDown,(void))

void CompletionList_obj::updateIndices(int modifier){
            	HX_STACKFRAME(&_hx_pos_26f69c8799845277_113_updateIndices)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(modifier,"modifier")
HXLINE( 114)		this->selectedIndex = this->bound((this->selectedIndex + modifier));
HXLINE( 115)		HX_VARI( Float,Value) = this->selectedIndex;
HXDLIN( 115)		HX_VARI(  ::Dynamic,Min) = this->lowerVisibleIndex;
HXDLIN( 115)		HX_VARI(  ::Dynamic,Max) = this->upperVisibleIndex;
HXDLIN( 115)		bool _hx_tmp;
HXDLIN( 115)		bool _hx_tmp1;
HXDLIN( 115)		if (hx::IsNotNull( Min )) {
HXLINE( 115)			_hx_tmp1 = hx::IsGreaterEq( Value,Min );
            		}
            		else {
HXLINE( 115)			_hx_tmp1 = true;
            		}
HXDLIN( 115)		if (_hx_tmp1) {
HXLINE( 115)			if (hx::IsNotNull( Max )) {
HXLINE( 115)				_hx_tmp = hx::IsLessEq( Value,Max );
            			}
            			else {
HXLINE( 115)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 115)			_hx_tmp = false;
            		}
HXDLIN( 115)		if (_hx_tmp) {
HXLINE( 116)			return;
            		}
HXLINE( 119)		this->lowerVisibleIndex = this->bound((this->lowerVisibleIndex + modifier));
HXLINE( 120)		this->upperVisibleIndex = this->bound((this->upperVisibleIndex + modifier));
HXLINE( 123)		if (((this->upperVisibleIndex - this->lowerVisibleIndex) == this->items->length)) {
HXLINE( 124)			return;
            		}
HXLINE( 127)		if ((this->lowerVisibleIndex == (int)0)) {
HXLINE( 128)			this->upperVisibleIndex = (this->entries->length - (int)1);
            		}
            		else {
HXLINE( 129)			if ((this->upperVisibleIndex == (this->items->length - (int)1))) {
HXLINE( 130)				this->lowerVisibleIndex = (this->items->length - this->entries->length);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompletionList_obj,updateIndices,(void))

int CompletionList_obj::bound(int index){
            	HX_STACKFRAME(&_hx_pos_26f69c8799845277_135_bound)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(index,"index")
HXLINE( 135)		HX_VARI(  ::Dynamic,Max) = (this->items->length - (int)1);
HXDLIN( 135)		HX_VAR( Float,lowerBound);
HXDLIN( 135)		if ((index < (int)0)) {
HXLINE( 135)			lowerBound = (int)0;
            		}
            		else {
HXLINE( 135)			lowerBound = index;
            		}
HXDLIN( 135)		Float _hx_tmp;
HXDLIN( 135)		bool _hx_tmp1;
HXDLIN( 135)		if (hx::IsNotNull( Max )) {
HXLINE( 135)			_hx_tmp1 = hx::IsGreater( lowerBound,Max );
            		}
            		else {
HXLINE( 135)			_hx_tmp1 = false;
            		}
HXDLIN( 135)		if (_hx_tmp1) {
HXLINE( 135)			_hx_tmp = Max;
            		}
            		else {
HXLINE( 135)			_hx_tmp = lowerBound;
            		}
HXDLIN( 135)		return ::Std_obj::_hx_int(_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompletionList_obj,bound,return )

void CompletionList_obj::updateEntries(){
            	HX_STACKFRAME(&_hx_pos_26f69c8799845277_139_updateEntries)
            	HX_STACK_THIS(this)
HXLINE( 140)		this->updateLabels();
HXLINE( 141)		this->updateSelectedItem();
HXLINE( 142)		this->scrollBar->updateHandle(this->lowerVisibleIndex,this->items->length,this->entries->length);
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompletionList_obj,updateEntries,(void))

void CompletionList_obj::updateLabels(){
            	HX_STACKFRAME(&_hx_pos_26f69c8799845277_147_updateLabels)
            	HX_STACK_THIS(this)
HXLINE( 147)		HX_VARI( int,_g1) = (int)0;
HXDLIN( 147)		HX_VARI( int,_g) = this->entries->length;
HXDLIN( 147)		while((_g1 < _g)){
HXLINE( 147)			_g1 = (_g1 + (int)1);
HXDLIN( 147)			HX_VARI( int,i) = (_g1 - (int)1);
HXLINE( 149)			HX_VARI( ::String,selectedItem) = this->items->__get((this->lowerVisibleIndex + i));
HXLINE( 150)			if (hx::IsNull( selectedItem )) {
HXLINE( 151)				selectedItem = HX_("",00,00,00,00);
            			}
HXLINE( 152)			this->entries->__get(i).StaticCast<  ::flixel::_hx_system::debug::completion::CompletionListEntry >()->setItem(selectedItem);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompletionList_obj,updateLabels,(void))

void CompletionList_obj::updateSelectedItem(){
            	HX_STACKFRAME(&_hx_pos_26f69c8799845277_157_updateSelectedItem)
            	HX_STACK_THIS(this)
HXLINE( 158)		{
HXLINE( 158)			HX_VARI( int,_g) = (int)0;
HXDLIN( 158)			HX_VARI( ::Array< ::Dynamic>,_g1) = this->entries;
HXDLIN( 158)			while((_g < _g1->length)){
HXLINE( 158)				HX_VARI(  ::flixel::_hx_system::debug::completion::CompletionListEntry,entry) = _g1->__get(_g).StaticCast<  ::flixel::_hx_system::debug::completion::CompletionListEntry >();
HXDLIN( 158)				_g = (_g + (int)1);
HXLINE( 159)				entry->set_selected(false);
            			}
            		}
HXLINE( 160)		this->entries->__get((this->selectedIndex - this->lowerVisibleIndex)).StaticCast<  ::flixel::_hx_system::debug::completion::CompletionListEntry >()->set_selected(true);
HXLINE( 162)		if (hx::IsNotNull( this->selectionChanged )) {
HXLINE( 163)			this->selectionChanged(this->items->__get(this->selectedIndex));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompletionList_obj,updateSelectedItem,(void))

void CompletionList_obj::setItems(::Array< ::String > items){
            	HX_STACKFRAME(&_hx_pos_26f69c8799845277_167_setItems)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(items,"items")
HXLINE( 168)		if (hx::IsNull( items )) {
HXLINE( 169)			return;
            		}
HXLINE( 170)		if ((items->length == (int)0)) {
HXLINE( 171)			this->close();
            		}
HXLINE( 173)		this->items = items;
HXLINE( 175)		this->selectedIndex = (int)0;
HXLINE( 176)		this->lowerVisibleIndex = (int)0;
HXLINE( 177)		this->upperVisibleIndex = (this->entries->length - (int)1);
HXLINE( 178)		this->updateEntries();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompletionList_obj,setItems,(void))

::Array< ::String > CompletionList_obj::filterItems(::String filter){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0,::String,filter) HXARGC(1)
            		bool _hx_run(::String item){
            			HX_STACKFRAME(&_hx_pos_26f69c8799845277_188_filterItems)
            			HX_STACK_ARG(item,"item")
HXLINE( 188)			::String s = item.toLowerCase();
HXDLIN( 188)			return (s.indexOf(filter.toLowerCase(),null()) != (int)-1);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_26f69c8799845277_182_filterItems)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(filter,"filter")
HXLINE( 183)		if (hx::IsNull( filter )) {
HXLINE( 184)			filter = HX_("",00,00,00,00);
            		}
HXLINE( 186)		::Array< ::String > _hx_tmp = this->originalItems->filter( ::Dynamic(new _hx_Closure_0(filter)));
HXDLIN( 186)		return this->sortItems(filter,_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompletionList_obj,filterItems,return )

::Array< ::String > CompletionList_obj::sortItems(::String filter,::Array< ::String > items){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0, ::flixel::_hx_system::debug::completion::CompletionList,_gthis,::String,filter) HXARGC(2)
            		int _hx_run(::String a,::String b){
            			HX_STACKFRAME(&_hx_pos_26f69c8799845277_203_sortItems)
            			HX_STACK_ARG(a,"a")
            			HX_STACK_ARG(b,"b")
HXLINE( 204)			HX_VARI( int,valueA) = _gthis->startsWithExt(a,filter);
HXLINE( 205)			HX_VARI( int,valueB) = _gthis->startsWithExt(b,filter);
HXLINE( 206)			if ((valueA > valueB)) {
HXLINE( 207)				return -(valueA);
            			}
HXLINE( 208)			if ((valueB > valueA)) {
HXLINE( 209)				return valueB;
            			}
HXLINE( 211)			if ((valueA == valueB)) {
HXLINE( 212)				return ::Std_obj::_hx_int((a.length - b.length));
            			}
HXLINE( 213)			return (int)0;
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_26f69c8799845277_198_sortItems)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(filter,"filter")
            	HX_STACK_ARG(items,"items")
HXLINE( 197)		HX_VARI(  ::flixel::_hx_system::debug::completion::CompletionList,_gthis) = hx::ObjectPtr<OBJ_>(this);
HXLINE( 199)		if ((filter == HX_("",00,00,00,00))) {
HXLINE( 200)			return items;
            		}
HXLINE( 202)		items->sort( ::Dynamic(new _hx_Closure_0(_gthis,filter)));
HXLINE( 215)		return items;
            	}


HX_DEFINE_DYNAMIC_FUNC2(CompletionList_obj,sortItems,return )

int CompletionList_obj::startsWithExt(::String s,::String start){
            	HX_GC_STACKFRAME(&_hx_pos_26f69c8799845277_222_startsWithExt)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(start,"start")
HXLINE( 223)		if (::StringTools_obj::startsWith(s,start)) {
HXLINE( 224)			return (int)2;
            		}
HXLINE( 225)		if (::StringTools_obj::startsWith( ::EReg_obj::__alloc( HX_CTX ,HX_("^[_]+",30,59,19,5c),HX_("",00,00,00,00))->replace(s,HX_("",00,00,00,00)),start)) {
HXLINE( 226)			return (int)1;
            		}
HXLINE( 227)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(CompletionList_obj,startsWithExt,return )

::String CompletionList_obj::set_filter(::String filter){
            	HX_STACKFRAME(&_hx_pos_26f69c8799845277_231_set_filter)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(filter,"filter")
HXLINE( 232)		if ((filter == this->filter)) {
HXLINE( 233)			return filter;
            		}
HXLINE( 235)		this->setItems(this->filterItems(filter));
HXLINE( 236)		return (this->filter = filter);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompletionList_obj,set_filter,return )


hx::ObjectPtr< CompletionList_obj > CompletionList_obj::__new(int capacity) {
	hx::ObjectPtr< CompletionList_obj > __this = new CompletionList_obj();
	__this->__construct(capacity);
	return __this;
}

hx::ObjectPtr< CompletionList_obj > CompletionList_obj::__alloc(hx::Ctx *_hx_ctx,int capacity) {
	CompletionList_obj *__this = (CompletionList_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CompletionList_obj), true, "flixel.system.debug.completion.CompletionList"));
	*(void **)__this = CompletionList_obj::_hx_vtable;
	__this->__construct(capacity);
	return __this;
}

CompletionList_obj::CompletionList_obj()
{
}

void CompletionList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CompletionList);
	HX_MARK_MEMBER_NAME(completed,"completed");
	HX_MARK_MEMBER_NAME(selectionChanged,"selectionChanged");
	HX_MARK_MEMBER_NAME(closed,"closed");
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_MEMBER_NAME(items,"items");
	HX_MARK_MEMBER_NAME(entries,"entries");
	HX_MARK_MEMBER_NAME(originalItems,"originalItems");
	HX_MARK_MEMBER_NAME(selectedIndex,"selectedIndex");
	HX_MARK_MEMBER_NAME(lowerVisibleIndex,"lowerVisibleIndex");
	HX_MARK_MEMBER_NAME(upperVisibleIndex,"upperVisibleIndex");
	HX_MARK_MEMBER_NAME(scrollBar,"scrollBar");
	HX_MARK_MEMBER_NAME(actualHeight,"actualHeight");
	 ::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CompletionList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(completed,"completed");
	HX_VISIT_MEMBER_NAME(selectionChanged,"selectionChanged");
	HX_VISIT_MEMBER_NAME(closed,"closed");
	HX_VISIT_MEMBER_NAME(filter,"filter");
	HX_VISIT_MEMBER_NAME(items,"items");
	HX_VISIT_MEMBER_NAME(entries,"entries");
	HX_VISIT_MEMBER_NAME(originalItems,"originalItems");
	HX_VISIT_MEMBER_NAME(selectedIndex,"selectedIndex");
	HX_VISIT_MEMBER_NAME(lowerVisibleIndex,"lowerVisibleIndex");
	HX_VISIT_MEMBER_NAME(upperVisibleIndex,"upperVisibleIndex");
	HX_VISIT_MEMBER_NAME(scrollBar,"scrollBar");
	HX_VISIT_MEMBER_NAME(actualHeight,"actualHeight");
	 ::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

hx::Val CompletionList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return hx::Val( show_dyn()); }
		if (HX_FIELD_EQ(inName,"setY") ) { return hx::Val( setY_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"items") ) { return hx::Val( items); }
		if (HX_FIELD_EQ(inName,"close") ) { return hx::Val( close_dyn()); }
		if (HX_FIELD_EQ(inName,"bound") ) { return hx::Val( bound_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"closed") ) { return hx::Val( closed); }
		if (HX_FIELD_EQ(inName,"filter") ) { return hx::Val( filter); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"entries") ) { return hx::Val( entries); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setItems") ) { return hx::Val( setItems_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"completed") ) { return hx::Val( completed); }
		if (HX_FIELD_EQ(inName,"scrollBar") ) { return hx::Val( scrollBar); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return hx::Val( onKeyDown_dyn()); }
		if (HX_FIELD_EQ(inName,"sortItems") ) { return hx::Val( sortItems_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_filter") ) { return hx::Val( set_filter_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"filterItems") ) { return hx::Val( filterItems_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"actualHeight") ) { return hx::Val( actualHeight); }
		if (HX_FIELD_EQ(inName,"updateLabels") ) { return hx::Val( updateLabels_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"originalItems") ) { return hx::Val( originalItems); }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { return hx::Val( selectedIndex); }
		if (HX_FIELD_EQ(inName,"updateIndices") ) { return hx::Val( updateIndices_dyn()); }
		if (HX_FIELD_EQ(inName,"updateEntries") ) { return hx::Val( updateEntries_dyn()); }
		if (HX_FIELD_EQ(inName,"startsWithExt") ) { return hx::Val( startsWithExt_dyn()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createScrollBar") ) { return hx::Val( createScrollBar_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"selectionChanged") ) { return hx::Val( selectionChanged); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lowerVisibleIndex") ) { return hx::Val( lowerVisibleIndex); }
		if (HX_FIELD_EQ(inName,"upperVisibleIndex") ) { return hx::Val( upperVisibleIndex); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createPopupEntries") ) { return hx::Val( createPopupEntries_dyn()); }
		if (HX_FIELD_EQ(inName,"updateSelectedItem") ) { return hx::Val( updateSelectedItem_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val CompletionList_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"items") ) { items=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"closed") ) { closed=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filter") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_filter(inValue) );filter=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"entries") ) { entries=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"completed") ) { completed=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollBar") ) { scrollBar=inValue.Cast<  ::flixel::_hx_system::debug::completion::CompletionListScrollBar >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"actualHeight") ) { actualHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"originalItems") ) { originalItems=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { selectedIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"selectionChanged") ) { selectionChanged=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lowerVisibleIndex") ) { lowerVisibleIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"upperVisibleIndex") ) { upperVisibleIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CompletionList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"));
	outFields->push(HX_HCSTRING("items","\x00","\xac","\x0c","\xc2"));
	outFields->push(HX_HCSTRING("entries","\x50","\x2d","\x5f","\x79"));
	outFields->push(HX_HCSTRING("originalItems","\xef","\xa1","\xfd","\x1c"));
	outFields->push(HX_HCSTRING("selectedIndex","\xb7","\x76","\x56","\xb4"));
	outFields->push(HX_HCSTRING("lowerVisibleIndex","\xe1","\x78","\x7b","\xb7"));
	outFields->push(HX_HCSTRING("upperVisibleIndex","\xc2","\xa5","\x5c","\x06"));
	outFields->push(HX_HCSTRING("scrollBar","\xc6","\x57","\xfc","\x3d"));
	outFields->push(HX_HCSTRING("actualHeight","\x15","\x25","\xab","\xb7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CompletionList_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(CompletionList_obj,completed),HX_HCSTRING("completed","\x8b","\xa1","\x38","\x4f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(CompletionList_obj,selectionChanged),HX_HCSTRING("selectionChanged","\x08","\xc2","\xcb","\x3c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(CompletionList_obj,closed),HX_HCSTRING("closed","\xac","\xa9","\x51","\x0e")},
	{hx::fsString,(int)offsetof(CompletionList_obj,filter),HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(CompletionList_obj,items),HX_HCSTRING("items","\x00","\xac","\x0c","\xc2")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CompletionList_obj,entries),HX_HCSTRING("entries","\x50","\x2d","\x5f","\x79")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(CompletionList_obj,originalItems),HX_HCSTRING("originalItems","\xef","\xa1","\xfd","\x1c")},
	{hx::fsInt,(int)offsetof(CompletionList_obj,selectedIndex),HX_HCSTRING("selectedIndex","\xb7","\x76","\x56","\xb4")},
	{hx::fsInt,(int)offsetof(CompletionList_obj,lowerVisibleIndex),HX_HCSTRING("lowerVisibleIndex","\xe1","\x78","\x7b","\xb7")},
	{hx::fsInt,(int)offsetof(CompletionList_obj,upperVisibleIndex),HX_HCSTRING("upperVisibleIndex","\xc2","\xa5","\x5c","\x06")},
	{hx::fsObject /*::flixel::_hx_system::debug::completion::CompletionListScrollBar*/ ,(int)offsetof(CompletionList_obj,scrollBar),HX_HCSTRING("scrollBar","\xc6","\x57","\xfc","\x3d")},
	{hx::fsInt,(int)offsetof(CompletionList_obj,actualHeight),HX_HCSTRING("actualHeight","\x15","\x25","\xab","\xb7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *CompletionList_obj_sStaticStorageInfo = 0;
#endif

static ::String CompletionList_obj_sMemberFields[] = {
	HX_HCSTRING("completed","\x8b","\xa1","\x38","\x4f"),
	HX_HCSTRING("selectionChanged","\x08","\xc2","\xcb","\x3c"),
	HX_HCSTRING("closed","\xac","\xa9","\x51","\x0e"),
	HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"),
	HX_HCSTRING("items","\x00","\xac","\x0c","\xc2"),
	HX_HCSTRING("entries","\x50","\x2d","\x5f","\x79"),
	HX_HCSTRING("originalItems","\xef","\xa1","\xfd","\x1c"),
	HX_HCSTRING("selectedIndex","\xb7","\x76","\x56","\xb4"),
	HX_HCSTRING("lowerVisibleIndex","\xe1","\x78","\x7b","\xb7"),
	HX_HCSTRING("upperVisibleIndex","\xc2","\xa5","\x5c","\x06"),
	HX_HCSTRING("scrollBar","\xc6","\x57","\xfc","\x3d"),
	HX_HCSTRING("actualHeight","\x15","\x25","\xab","\xb7"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("setY","\x77","\x92","\x50","\x4c"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("createPopupEntries","\xa0","\x65","\xfa","\x73"),
	HX_HCSTRING("createScrollBar","\x2a","\x11","\xf1","\xde"),
	HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73"),
	HX_HCSTRING("updateIndices","\x1e","\xac","\xc2","\xae"),
	HX_HCSTRING("bound","\x3e","\xb0","\xfc","\xb6"),
	HX_HCSTRING("updateEntries","\x47","\x92","\xcd","\x44"),
	HX_HCSTRING("updateLabels","\xe8","\xce","\x40","\x49"),
	HX_HCSTRING("updateSelectedItem","\xb7","\x20","\x67","\x4e"),
	HX_HCSTRING("setItems","\xfe","\x14","\x41","\xd0"),
	HX_HCSTRING("filterItems","\x28","\x01","\xbf","\x71"),
	HX_HCSTRING("sortItems","\xc2","\x7f","\x80","\xca"),
	HX_HCSTRING("startsWithExt","\x6a","\x68","\x65","\x09"),
	HX_HCSTRING("set_filter","\xf5","\x2d","\x3a","\x79"),
	::String(null()) };

static void CompletionList_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CompletionList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CompletionList_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CompletionList_obj::__mClass,"__mClass");
};

#endif

hx::Class CompletionList_obj::__mClass;

void CompletionList_obj::__register()
{
	hx::Object *dummy = new CompletionList_obj;
	CompletionList_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.completion.CompletionList","\x44","\x65","\x51","\x72");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CompletionList_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CompletionList_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CompletionList_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CompletionList_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CompletionList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CompletionList_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace completion
