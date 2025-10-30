#include <com/sun/tools/javac/code/Types$UniqueType.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Types$UniqueType_FieldInfo_[] = {
	{"type", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Types$UniqueType, type)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL, $field(Types$UniqueType, types)},
	{}
};

$MethodInfo _Types$UniqueType_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Types;)V", nullptr, $PUBLIC, $method(static_cast<void(Types$UniqueType::*)($Type*,$Types*)>(&Types$UniqueType::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Types$UniqueType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$UniqueType", "com.sun.tools.javac.code.Types", "UniqueType", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Types$UniqueType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Types$UniqueType",
	"java.lang.Object",
	nullptr,
	_Types$UniqueType_FieldInfo_,
	_Types$UniqueType_MethodInfo_,
	nullptr,
	nullptr,
	_Types$UniqueType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$UniqueType($Class* clazz) {
	return $of($alloc(Types$UniqueType));
}

void Types$UniqueType::init$($Type* type, $Types* types) {
	$set(this, type, type);
	$set(this, types, types);
}

int32_t Types$UniqueType::hashCode() {
	return $nc(this->types)->hashCode(this->type);
}

bool Types$UniqueType::equals(Object$* obj) {
	$var(Types$UniqueType, uniqueType, nullptr);
	bool var$1 = $instanceOf(Types$UniqueType, obj);
	if (var$1) {
		$assign(uniqueType, $cast(Types$UniqueType, obj));
		var$1 = true;
	}
	bool var$0 = (var$1);
	return var$0 && $nc(this->types)->isSameType(this->type, $nc(uniqueType)->type);
}

$String* Types$UniqueType::toString() {
	return $nc(this->type)->toString();
}

Types$UniqueType::Types$UniqueType() {
}

$Class* Types$UniqueType::load$($String* name, bool initialize) {
	$loadClass(Types$UniqueType, name, initialize, &_Types$UniqueType_ClassInfo_, allocate$Types$UniqueType);
	return class$;
}

$Class* Types$UniqueType::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com