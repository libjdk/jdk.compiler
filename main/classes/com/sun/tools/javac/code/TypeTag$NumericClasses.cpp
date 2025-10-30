#include <com/sun/tools/javac/code/TypeTag$NumericClasses.h>

#include <com/sun/tools/javac/code/TypeTag.h>
#include <jcpp.h>

#undef BYTE_CLASS
#undef BYTE_SUPERCLASSES
#undef CHAR_CLASS
#undef CHAR_SUPERCLASSES
#undef DOUBLE_CLASS
#undef FLOAT_CLASS
#undef FLOAT_SUPERCLASSES
#undef INT_CLASS
#undef INT_SUPERCLASSES
#undef LONG_CLASS
#undef LONG_SUPERCLASSES
#undef SHORT_CLASS
#undef SHORT_SUPERCLASSES

using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _TypeTag$NumericClasses_FieldInfo_[] = {
	{"BYTE_CLASS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeTag$NumericClasses, BYTE_CLASS)},
	{"CHAR_CLASS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeTag$NumericClasses, CHAR_CLASS)},
	{"SHORT_CLASS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeTag$NumericClasses, SHORT_CLASS)},
	{"INT_CLASS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeTag$NumericClasses, INT_CLASS)},
	{"LONG_CLASS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeTag$NumericClasses, LONG_CLASS)},
	{"FLOAT_CLASS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeTag$NumericClasses, FLOAT_CLASS)},
	{"DOUBLE_CLASS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeTag$NumericClasses, DOUBLE_CLASS)},
	{"BYTE_SUPERCLASSES", "I", nullptr, $STATIC | $FINAL, $constField(TypeTag$NumericClasses, BYTE_SUPERCLASSES)},
	{"CHAR_SUPERCLASSES", "I", nullptr, $STATIC | $FINAL, $constField(TypeTag$NumericClasses, CHAR_SUPERCLASSES)},
	{"SHORT_SUPERCLASSES", "I", nullptr, $STATIC | $FINAL, $constField(TypeTag$NumericClasses, SHORT_SUPERCLASSES)},
	{"INT_SUPERCLASSES", "I", nullptr, $STATIC | $FINAL, $constField(TypeTag$NumericClasses, INT_SUPERCLASSES)},
	{"LONG_SUPERCLASSES", "I", nullptr, $STATIC | $FINAL, $constField(TypeTag$NumericClasses, LONG_SUPERCLASSES)},
	{"FLOAT_SUPERCLASSES", "I", nullptr, $STATIC | $FINAL, $constField(TypeTag$NumericClasses, FLOAT_SUPERCLASSES)},
	{}
};

$MethodInfo _TypeTag$NumericClasses_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TypeTag$NumericClasses::*)()>(&TypeTag$NumericClasses::init$))},
	{}
};

$InnerClassInfo _TypeTag$NumericClasses_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.TypeTag$NumericClasses", "com.sun.tools.javac.code.TypeTag", "NumericClasses", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TypeTag$NumericClasses_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.TypeTag$NumericClasses",
	"java.lang.Object",
	nullptr,
	_TypeTag$NumericClasses_FieldInfo_,
	_TypeTag$NumericClasses_MethodInfo_,
	nullptr,
	nullptr,
	_TypeTag$NumericClasses_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.TypeTag"
};

$Object* allocate$TypeTag$NumericClasses($Class* clazz) {
	return $of($alloc(TypeTag$NumericClasses));
}

void TypeTag$NumericClasses::init$() {
}

TypeTag$NumericClasses::TypeTag$NumericClasses() {
}

$Class* TypeTag$NumericClasses::load$($String* name, bool initialize) {
	$loadClass(TypeTag$NumericClasses, name, initialize, &_TypeTag$NumericClasses_ClassInfo_, allocate$TypeTag$NumericClasses);
	return class$;
}

$Class* TypeTag$NumericClasses::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com