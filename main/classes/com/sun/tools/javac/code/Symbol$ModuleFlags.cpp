#include <com/sun/tools/javac/code/Symbol$ModuleFlags.h>

#include <com/sun/tools/javac/code/Symbol.h>
#include <java/lang/Enum.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef MANDATED
#undef OPEN
#undef SYNTHETIC

using $Symbol$ModuleFlagsArray = $Array<::com::sun::tools::javac::code::Symbol$ModuleFlags>;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Symbol$ModuleFlags_FieldInfo_[] = {
	{"OPEN", "Lcom/sun/tools/javac/code/Symbol$ModuleFlags;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Symbol$ModuleFlags, OPEN)},
	{"SYNTHETIC", "Lcom/sun/tools/javac/code/Symbol$ModuleFlags;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Symbol$ModuleFlags, SYNTHETIC)},
	{"MANDATED", "Lcom/sun/tools/javac/code/Symbol$ModuleFlags;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Symbol$ModuleFlags, MANDATED)},
	{"$VALUES", "[Lcom/sun/tools/javac/code/Symbol$ModuleFlags;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Symbol$ModuleFlags, $VALUES)},
	{"value", "I", nullptr, $PUBLIC | $FINAL, $field(Symbol$ModuleFlags, value$)},
	{}
};

$MethodInfo _Symbol$ModuleFlags_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/code/Symbol$ModuleFlags;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Symbol$ModuleFlagsArray*(*)()>(&Symbol$ModuleFlags::$values))},
	{"<init>", "(Ljava/lang/String;II)V", "(I)V", $PRIVATE, $method(static_cast<void(Symbol$ModuleFlags::*)($String*,int32_t,int32_t)>(&Symbol$ModuleFlags::init$))},
	{"value", "(Ljava/util/Set;)I", "(Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$ModuleFlags;>;)I", $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Set*)>(&Symbol$ModuleFlags::value))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/Symbol$ModuleFlags;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Symbol$ModuleFlags*(*)($String*)>(&Symbol$ModuleFlags::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/code/Symbol$ModuleFlags;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Symbol$ModuleFlagsArray*(*)()>(&Symbol$ModuleFlags::values))},
	{}
};

$InnerClassInfo _Symbol$ModuleFlags_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Symbol$ModuleFlags", "com.sun.tools.javac.code.Symbol", "ModuleFlags", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Symbol$ModuleFlags_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.code.Symbol$ModuleFlags",
	"java.lang.Enum",
	nullptr,
	_Symbol$ModuleFlags_FieldInfo_,
	_Symbol$ModuleFlags_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/code/Symbol$ModuleFlags;>;",
	nullptr,
	_Symbol$ModuleFlags_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Symbol"
};

$Object* allocate$Symbol$ModuleFlags($Class* clazz) {
	return $of($alloc(Symbol$ModuleFlags));
}

Symbol$ModuleFlags* Symbol$ModuleFlags::OPEN = nullptr;
Symbol$ModuleFlags* Symbol$ModuleFlags::SYNTHETIC = nullptr;
Symbol$ModuleFlags* Symbol$ModuleFlags::MANDATED = nullptr;
$Symbol$ModuleFlagsArray* Symbol$ModuleFlags::$VALUES = nullptr;

$Symbol$ModuleFlagsArray* Symbol$ModuleFlags::$values() {
	$init(Symbol$ModuleFlags);
	return $new($Symbol$ModuleFlagsArray, {
		Symbol$ModuleFlags::OPEN,
		Symbol$ModuleFlags::SYNTHETIC,
		Symbol$ModuleFlags::MANDATED
	});
}

$Symbol$ModuleFlagsArray* Symbol$ModuleFlags::values() {
	$init(Symbol$ModuleFlags);
	return $cast($Symbol$ModuleFlagsArray, Symbol$ModuleFlags::$VALUES->clone());
}

Symbol$ModuleFlags* Symbol$ModuleFlags::valueOf($String* name) {
	$init(Symbol$ModuleFlags);
	return $cast(Symbol$ModuleFlags, $Enum::valueOf(Symbol$ModuleFlags::class$, name));
}

int32_t Symbol$ModuleFlags::value($Set* s) {
	$init(Symbol$ModuleFlags);
	int32_t v = 0;
	{
		$var($Iterator, i$, $nc(s)->iterator());
		for (; $nc(i$)->hasNext();) {
			Symbol$ModuleFlags* f = $cast(Symbol$ModuleFlags, i$->next());
			v |= $nc(f)->value$;
		}
	}
	return v;
}

void Symbol$ModuleFlags::init$($String* $enum$name, int32_t $enum$ordinal, int32_t value) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->value$ = value;
}

void clinit$Symbol$ModuleFlags($Class* class$) {
	$assignStatic(Symbol$ModuleFlags::OPEN, $new(Symbol$ModuleFlags, "OPEN"_s, 0, 32));
	$assignStatic(Symbol$ModuleFlags::SYNTHETIC, $new(Symbol$ModuleFlags, "SYNTHETIC"_s, 1, 4096));
	$assignStatic(Symbol$ModuleFlags::MANDATED, $new(Symbol$ModuleFlags, "MANDATED"_s, 2, 32768));
	$assignStatic(Symbol$ModuleFlags::$VALUES, Symbol$ModuleFlags::$values());
}

Symbol$ModuleFlags::Symbol$ModuleFlags() {
}

$Class* Symbol$ModuleFlags::load$($String* name, bool initialize) {
	$loadClass(Symbol$ModuleFlags, name, initialize, &_Symbol$ModuleFlags_ClassInfo_, clinit$Symbol$ModuleFlags, allocate$Symbol$ModuleFlags);
	return class$;
}

$Class* Symbol$ModuleFlags::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com