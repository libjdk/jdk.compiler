#include <com/sun/tools/javac/tree/TreeInfo$PatternPrimaryType.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <java/lang/Record.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/runtime/ObjectMethods.h>
#include <jcpp.h>

using $MethodHandleArray = $Array<::java::lang::invoke::MethodHandle>;
using $Type = ::com::sun::tools::javac::code::Type;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Record = ::java::lang::Record;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $ObjectMethods = ::java::lang::runtime::ObjectMethods;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _TreeInfo$PatternPrimaryType_FieldInfo_[] = {
	{"type", "Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $FINAL, $field(TreeInfo$PatternPrimaryType, type$)},
	{"unconditional", "Z", nullptr, $PRIVATE | $FINAL, $field(TreeInfo$PatternPrimaryType, unconditional$)},
	{}
};

$MethodInfo _TreeInfo$PatternPrimaryType_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type;Z)V", nullptr, $PUBLIC, $method(static_cast<void(TreeInfo$PatternPrimaryType::*)($Type*,bool)>(&TreeInfo$PatternPrimaryType::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"type", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $method(static_cast<$Type*(TreeInfo$PatternPrimaryType::*)()>(&TreeInfo$PatternPrimaryType::type))},
	{"unconditional", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(TreeInfo$PatternPrimaryType::*)()>(&TreeInfo$PatternPrimaryType::unconditional))},
	{}
};

$InnerClassInfo _TreeInfo$PatternPrimaryType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.TreeInfo$PatternPrimaryType", "com.sun.tools.javac.tree.TreeInfo", "PatternPrimaryType", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _TreeInfo$PatternPrimaryType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.tools.javac.tree.TreeInfo$PatternPrimaryType",
	"java.lang.Record",
	nullptr,
	_TreeInfo$PatternPrimaryType_FieldInfo_,
	_TreeInfo$PatternPrimaryType_MethodInfo_,
	nullptr,
	nullptr,
	_TreeInfo$PatternPrimaryType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.TreeInfo"
};

$Object* allocate$TreeInfo$PatternPrimaryType($Class* clazz) {
	return $of($alloc(TreeInfo$PatternPrimaryType));
}

void TreeInfo$PatternPrimaryType::init$($Type* type, bool unconditional) {
	$Record::init$();
	$set(this, type$, type);
	this->unconditional$ = unconditional;
}

$Type* TreeInfo$PatternPrimaryType::type() {
	return this->type$;
}

bool TreeInfo$PatternPrimaryType::unconditional() {
	return this->unconditional$;
}

$String* TreeInfo$PatternPrimaryType::toString() {
	$useLocalCurrentObjectStackCache();
	return $cast($String, $cast($MethodHandle, $($ObjectMethods::bootstrap($($MethodHandles::lookup()), "toString"_s, $($MethodType::methodType(nullptr)), TreeInfo$PatternPrimaryType::class$, "type;unconditional"_s, $$new($MethodHandleArray, {nullptr, nullptr}))))->invoke($$new($ObjectArray, {$of(this)})));
}

int32_t TreeInfo$PatternPrimaryType::hashCode() {
	$useLocalCurrentObjectStackCache();
	return $intValue($cast($MethodHandle, $($ObjectMethods::bootstrap($($MethodHandles::lookup()), "hashCode"_s, $($MethodType::methodType(nullptr)), TreeInfo$PatternPrimaryType::class$, "type;unconditional"_s, $$new($MethodHandleArray, {nullptr, nullptr}))))->invoke($$new($ObjectArray, {$of(this)})));
}

bool TreeInfo$PatternPrimaryType::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	return $booleanValue($cast($MethodHandle, $($ObjectMethods::bootstrap($($MethodHandles::lookup()), "equals"_s, $($MethodType::methodType(nullptr)), TreeInfo$PatternPrimaryType::class$, "type;unconditional"_s, $$new($MethodHandleArray, {nullptr, nullptr}))))->invoke($$new($ObjectArray, {$of(this), o})));
}

TreeInfo$PatternPrimaryType::TreeInfo$PatternPrimaryType() {
}

$Class* TreeInfo$PatternPrimaryType::load$($String* name, bool initialize) {
	$loadClass(TreeInfo$PatternPrimaryType, name, initialize, &_TreeInfo$PatternPrimaryType_ClassInfo_, allocate$TreeInfo$PatternPrimaryType);
	return class$;
}

$Class* TreeInfo$PatternPrimaryType::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com