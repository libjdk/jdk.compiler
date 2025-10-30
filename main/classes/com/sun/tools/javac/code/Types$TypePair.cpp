#include <com/sun/tools/javac/code/Types$TypePair.h>

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

$FieldInfo _Types$TypePair_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$TypePair, this$0)},
	{"t1", "Lcom/sun/tools/javac/code/Type;", nullptr, $FINAL, $field(Types$TypePair, t1)},
	{"t2", "Lcom/sun/tools/javac/code/Type;", nullptr, $FINAL, $field(Types$TypePair, t2)},
	{}
};

$MethodInfo _Types$TypePair_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $method(static_cast<void(Types$TypePair::*)($Types*,$Type*,$Type*)>(&Types$TypePair::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Types$TypePair_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$TypePair", "com.sun.tools.javac.code.Types", "TypePair", 0},
	{}
};

$ClassInfo _Types$TypePair_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$TypePair",
	"java.lang.Object",
	nullptr,
	_Types$TypePair_FieldInfo_,
	_Types$TypePair_MethodInfo_,
	nullptr,
	nullptr,
	_Types$TypePair_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$TypePair($Class* clazz) {
	return $of($alloc(Types$TypePair));
}

void Types$TypePair::init$($Types* this$0, $Type* t1, $Type* t2) {
	$set(this, this$0, this$0);
	$set(this, t1, t1);
	$set(this, t2, t2);
}

int32_t Types$TypePair::hashCode() {
	int32_t var$0 = 127 * this->this$0->hashCode(this->t1);
	return var$0 + this->this$0->hashCode(this->t2);
}

bool Types$TypePair::equals(Object$* obj) {
	$var(Types$TypePair, typePair, nullptr);
	bool var$2 = $instanceOf(Types$TypePair, obj);
	if (var$2) {
		$assign(typePair, $cast(Types$TypePair, obj));
		var$2 = true;
	}
	bool var$1 = (var$2);
	bool var$0 = var$1 && this->this$0->isSameType(this->t1, $nc(typePair)->t1);
	return var$0 && this->this$0->isSameType(this->t2, $nc(typePair)->t2);
}

Types$TypePair::Types$TypePair() {
}

$Class* Types$TypePair::load$($String* name, bool initialize) {
	$loadClass(Types$TypePair, name, initialize, &_Types$TypePair_ClassInfo_, allocate$Types$TypePair);
	return class$;
}

$Class* Types$TypePair::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com