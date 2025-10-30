#include <com/sun/tools/javac/code/Symbol$ModuleResolutionFlags.h>

#include <com/sun/tools/javac/code/Symbol.h>
#include <java/lang/Enum.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef DO_NOT_RESOLVE_BY_DEFAULT
#undef WARN_DEPRECATED
#undef WARN_DEPRECATED_REMOVAL
#undef WARN_INCUBATING

using $Symbol$ModuleResolutionFlagsArray = $Array<::com::sun::tools::javac::code::Symbol$ModuleResolutionFlags>;
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

$FieldInfo _Symbol$ModuleResolutionFlags_FieldInfo_[] = {
	{"DO_NOT_RESOLVE_BY_DEFAULT", "Lcom/sun/tools/javac/code/Symbol$ModuleResolutionFlags;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Symbol$ModuleResolutionFlags, DO_NOT_RESOLVE_BY_DEFAULT)},
	{"WARN_DEPRECATED", "Lcom/sun/tools/javac/code/Symbol$ModuleResolutionFlags;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Symbol$ModuleResolutionFlags, WARN_DEPRECATED)},
	{"WARN_DEPRECATED_REMOVAL", "Lcom/sun/tools/javac/code/Symbol$ModuleResolutionFlags;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Symbol$ModuleResolutionFlags, WARN_DEPRECATED_REMOVAL)},
	{"WARN_INCUBATING", "Lcom/sun/tools/javac/code/Symbol$ModuleResolutionFlags;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Symbol$ModuleResolutionFlags, WARN_INCUBATING)},
	{"$VALUES", "[Lcom/sun/tools/javac/code/Symbol$ModuleResolutionFlags;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Symbol$ModuleResolutionFlags, $VALUES)},
	{"value", "I", nullptr, $PUBLIC | $FINAL, $field(Symbol$ModuleResolutionFlags, value$)},
	{}
};

$MethodInfo _Symbol$ModuleResolutionFlags_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/code/Symbol$ModuleResolutionFlags;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Symbol$ModuleResolutionFlagsArray*(*)()>(&Symbol$ModuleResolutionFlags::$values))},
	{"<init>", "(Ljava/lang/String;II)V", "(I)V", $PRIVATE, $method(static_cast<void(Symbol$ModuleResolutionFlags::*)($String*,int32_t,int32_t)>(&Symbol$ModuleResolutionFlags::init$))},
	{"value", "(Ljava/util/Set;)I", "(Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$ModuleResolutionFlags;>;)I", $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Set*)>(&Symbol$ModuleResolutionFlags::value))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/Symbol$ModuleResolutionFlags;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Symbol$ModuleResolutionFlags*(*)($String*)>(&Symbol$ModuleResolutionFlags::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/code/Symbol$ModuleResolutionFlags;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Symbol$ModuleResolutionFlagsArray*(*)()>(&Symbol$ModuleResolutionFlags::values))},
	{}
};

$InnerClassInfo _Symbol$ModuleResolutionFlags_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Symbol$ModuleResolutionFlags", "com.sun.tools.javac.code.Symbol", "ModuleResolutionFlags", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Symbol$ModuleResolutionFlags_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.code.Symbol$ModuleResolutionFlags",
	"java.lang.Enum",
	nullptr,
	_Symbol$ModuleResolutionFlags_FieldInfo_,
	_Symbol$ModuleResolutionFlags_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/code/Symbol$ModuleResolutionFlags;>;",
	nullptr,
	_Symbol$ModuleResolutionFlags_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Symbol"
};

$Object* allocate$Symbol$ModuleResolutionFlags($Class* clazz) {
	return $of($alloc(Symbol$ModuleResolutionFlags));
}

Symbol$ModuleResolutionFlags* Symbol$ModuleResolutionFlags::DO_NOT_RESOLVE_BY_DEFAULT = nullptr;
Symbol$ModuleResolutionFlags* Symbol$ModuleResolutionFlags::WARN_DEPRECATED = nullptr;
Symbol$ModuleResolutionFlags* Symbol$ModuleResolutionFlags::WARN_DEPRECATED_REMOVAL = nullptr;
Symbol$ModuleResolutionFlags* Symbol$ModuleResolutionFlags::WARN_INCUBATING = nullptr;
$Symbol$ModuleResolutionFlagsArray* Symbol$ModuleResolutionFlags::$VALUES = nullptr;

$Symbol$ModuleResolutionFlagsArray* Symbol$ModuleResolutionFlags::$values() {
	$init(Symbol$ModuleResolutionFlags);
	return $new($Symbol$ModuleResolutionFlagsArray, {
		Symbol$ModuleResolutionFlags::DO_NOT_RESOLVE_BY_DEFAULT,
		Symbol$ModuleResolutionFlags::WARN_DEPRECATED,
		Symbol$ModuleResolutionFlags::WARN_DEPRECATED_REMOVAL,
		Symbol$ModuleResolutionFlags::WARN_INCUBATING
	});
}

$Symbol$ModuleResolutionFlagsArray* Symbol$ModuleResolutionFlags::values() {
	$init(Symbol$ModuleResolutionFlags);
	return $cast($Symbol$ModuleResolutionFlagsArray, Symbol$ModuleResolutionFlags::$VALUES->clone());
}

Symbol$ModuleResolutionFlags* Symbol$ModuleResolutionFlags::valueOf($String* name) {
	$init(Symbol$ModuleResolutionFlags);
	return $cast(Symbol$ModuleResolutionFlags, $Enum::valueOf(Symbol$ModuleResolutionFlags::class$, name));
}

int32_t Symbol$ModuleResolutionFlags::value($Set* s) {
	$init(Symbol$ModuleResolutionFlags);
	int32_t v = 0;
	{
		$var($Iterator, i$, $nc(s)->iterator());
		for (; $nc(i$)->hasNext();) {
			Symbol$ModuleResolutionFlags* f = $cast(Symbol$ModuleResolutionFlags, i$->next());
			v |= $nc(f)->value$;
		}
	}
	return v;
}

void Symbol$ModuleResolutionFlags::init$($String* $enum$name, int32_t $enum$ordinal, int32_t value) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->value$ = value;
}

void clinit$Symbol$ModuleResolutionFlags($Class* class$) {
	$assignStatic(Symbol$ModuleResolutionFlags::DO_NOT_RESOLVE_BY_DEFAULT, $new(Symbol$ModuleResolutionFlags, "DO_NOT_RESOLVE_BY_DEFAULT"_s, 0, 1));
	$assignStatic(Symbol$ModuleResolutionFlags::WARN_DEPRECATED, $new(Symbol$ModuleResolutionFlags, "WARN_DEPRECATED"_s, 1, 2));
	$assignStatic(Symbol$ModuleResolutionFlags::WARN_DEPRECATED_REMOVAL, $new(Symbol$ModuleResolutionFlags, "WARN_DEPRECATED_REMOVAL"_s, 2, 4));
	$assignStatic(Symbol$ModuleResolutionFlags::WARN_INCUBATING, $new(Symbol$ModuleResolutionFlags, "WARN_INCUBATING"_s, 3, 8));
	$assignStatic(Symbol$ModuleResolutionFlags::$VALUES, Symbol$ModuleResolutionFlags::$values());
}

Symbol$ModuleResolutionFlags::Symbol$ModuleResolutionFlags() {
}

$Class* Symbol$ModuleResolutionFlags::load$($String* name, bool initialize) {
	$loadClass(Symbol$ModuleResolutionFlags, name, initialize, &_Symbol$ModuleResolutionFlags_ClassInfo_, clinit$Symbol$ModuleResolutionFlags, allocate$Symbol$ModuleResolutionFlags);
	return class$;
}

$Class* Symbol$ModuleResolutionFlags::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com