#include <com/sun/tools/javac/tree/TreeInfo$PosKind.h>

#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <java/io/Serializable.h>
#include <java/lang/Enum.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/ToIntFunction.h>
#include <jcpp.h>

#undef END_POS
#undef FIRST_STAT_POS
#undef START_POS

using $TreeInfo$PosKindArray = $Array<::com::sun::tools::javac::tree::TreeInfo$PosKind>;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $ToIntFunction = ::java::util::function::ToIntFunction;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class TreeInfo$PosKind$$Lambda$getStartPos : public $ToIntFunction {
	$class(TreeInfo$PosKind$$Lambda$getStartPos, $NO_CLASS_INIT, $ToIntFunction)
public:
	void init$() {
	}
	virtual int32_t applyAsInt(Object$* tree) override {
		 return $TreeInfo::getStartPos($cast($JCTree, tree));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TreeInfo$PosKind$$Lambda$getStartPos>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TreeInfo$PosKind$$Lambda$getStartPos::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TreeInfo$PosKind$$Lambda$getStartPos::*)()>(&TreeInfo$PosKind$$Lambda$getStartPos::init$))},
	{"applyAsInt", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo TreeInfo$PosKind$$Lambda$getStartPos::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.tree.TreeInfo$PosKind$$Lambda$getStartPos",
	"java.lang.Object",
	"java.util.function.ToIntFunction",
	nullptr,
	methodInfos
};
$Class* TreeInfo$PosKind$$Lambda$getStartPos::load$($String* name, bool initialize) {
	$loadClass(TreeInfo$PosKind$$Lambda$getStartPos, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TreeInfo$PosKind$$Lambda$getStartPos::class$ = nullptr;

class TreeInfo$PosKind$$Lambda$firstStatPos$1 : public $ToIntFunction {
	$class(TreeInfo$PosKind$$Lambda$firstStatPos$1, $NO_CLASS_INIT, $ToIntFunction)
public:
	void init$() {
	}
	virtual int32_t applyAsInt(Object$* tree) override {
		 return $TreeInfo::firstStatPos($cast($JCTree, tree));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TreeInfo$PosKind$$Lambda$firstStatPos$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TreeInfo$PosKind$$Lambda$firstStatPos$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TreeInfo$PosKind$$Lambda$firstStatPos$1::*)()>(&TreeInfo$PosKind$$Lambda$firstStatPos$1::init$))},
	{"applyAsInt", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo TreeInfo$PosKind$$Lambda$firstStatPos$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.tree.TreeInfo$PosKind$$Lambda$firstStatPos$1",
	"java.lang.Object",
	"java.util.function.ToIntFunction",
	nullptr,
	methodInfos
};
$Class* TreeInfo$PosKind$$Lambda$firstStatPos$1::load$($String* name, bool initialize) {
	$loadClass(TreeInfo$PosKind$$Lambda$firstStatPos$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TreeInfo$PosKind$$Lambda$firstStatPos$1::class$ = nullptr;

class TreeInfo$PosKind$$Lambda$endPos$2 : public $ToIntFunction {
	$class(TreeInfo$PosKind$$Lambda$endPos$2, $NO_CLASS_INIT, $ToIntFunction)
public:
	void init$() {
	}
	virtual int32_t applyAsInt(Object$* tree) override {
		 return $TreeInfo::endPos($cast($JCTree, tree));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TreeInfo$PosKind$$Lambda$endPos$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TreeInfo$PosKind$$Lambda$endPos$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TreeInfo$PosKind$$Lambda$endPos$2::*)()>(&TreeInfo$PosKind$$Lambda$endPos$2::init$))},
	{"applyAsInt", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo TreeInfo$PosKind$$Lambda$endPos$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.tree.TreeInfo$PosKind$$Lambda$endPos$2",
	"java.lang.Object",
	"java.util.function.ToIntFunction",
	nullptr,
	methodInfos
};
$Class* TreeInfo$PosKind$$Lambda$endPos$2::load$($String* name, bool initialize) {
	$loadClass(TreeInfo$PosKind$$Lambda$endPos$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TreeInfo$PosKind$$Lambda$endPos$2::class$ = nullptr;

$FieldInfo _TreeInfo$PosKind_FieldInfo_[] = {
	{"START_POS", "Lcom/sun/tools/javac/tree/TreeInfo$PosKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TreeInfo$PosKind, START_POS)},
	{"FIRST_STAT_POS", "Lcom/sun/tools/javac/tree/TreeInfo$PosKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TreeInfo$PosKind, FIRST_STAT_POS)},
	{"END_POS", "Lcom/sun/tools/javac/tree/TreeInfo$PosKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TreeInfo$PosKind, END_POS)},
	{"$VALUES", "[Lcom/sun/tools/javac/tree/TreeInfo$PosKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(TreeInfo$PosKind, $VALUES)},
	{"posFunc", "Ljava/util/function/ToIntFunction;", "Ljava/util/function/ToIntFunction<Lcom/sun/tools/javac/tree/JCTree;>;", $FINAL, $field(TreeInfo$PosKind, posFunc)},
	{}
};

$MethodInfo _TreeInfo$PosKind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/tree/TreeInfo$PosKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$TreeInfo$PosKindArray*(*)()>(&TreeInfo$PosKind::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/util/function/ToIntFunction;)V", "(Ljava/util/function/ToIntFunction<Lcom/sun/tools/javac/tree/JCTree;>;)V", $PRIVATE, $method(static_cast<void(TreeInfo$PosKind::*)($String*,int32_t,$ToIntFunction*)>(&TreeInfo$PosKind::init$))},
	{"toPos", "(Lcom/sun/tools/javac/tree/JCTree;)I", nullptr, 0, $method(static_cast<int32_t(TreeInfo$PosKind::*)($JCTree*)>(&TreeInfo$PosKind::toPos))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/tree/TreeInfo$PosKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TreeInfo$PosKind*(*)($String*)>(&TreeInfo$PosKind::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/tree/TreeInfo$PosKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TreeInfo$PosKindArray*(*)()>(&TreeInfo$PosKind::values))},
	{}
};

$InnerClassInfo _TreeInfo$PosKind_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.TreeInfo$PosKind", "com.sun.tools.javac.tree.TreeInfo", "PosKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _TreeInfo$PosKind_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.tree.TreeInfo$PosKind",
	"java.lang.Enum",
	nullptr,
	_TreeInfo$PosKind_FieldInfo_,
	_TreeInfo$PosKind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/tree/TreeInfo$PosKind;>;",
	nullptr,
	_TreeInfo$PosKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.TreeInfo"
};

$Object* allocate$TreeInfo$PosKind($Class* clazz) {
	return $of($alloc(TreeInfo$PosKind));
}

TreeInfo$PosKind* TreeInfo$PosKind::START_POS = nullptr;
TreeInfo$PosKind* TreeInfo$PosKind::FIRST_STAT_POS = nullptr;
TreeInfo$PosKind* TreeInfo$PosKind::END_POS = nullptr;
$TreeInfo$PosKindArray* TreeInfo$PosKind::$VALUES = nullptr;

$TreeInfo$PosKindArray* TreeInfo$PosKind::$values() {
	$init(TreeInfo$PosKind);
	return $new($TreeInfo$PosKindArray, {
		TreeInfo$PosKind::START_POS,
		TreeInfo$PosKind::FIRST_STAT_POS,
		TreeInfo$PosKind::END_POS
	});
}

$TreeInfo$PosKindArray* TreeInfo$PosKind::values() {
	$init(TreeInfo$PosKind);
	return $cast($TreeInfo$PosKindArray, TreeInfo$PosKind::$VALUES->clone());
}

TreeInfo$PosKind* TreeInfo$PosKind::valueOf($String* name) {
	$init(TreeInfo$PosKind);
	return $cast(TreeInfo$PosKind, $Enum::valueOf(TreeInfo$PosKind::class$, name));
}

void TreeInfo$PosKind::init$($String* $enum$name, int32_t $enum$ordinal, $ToIntFunction* posFunc) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, posFunc, posFunc);
}

int32_t TreeInfo$PosKind::toPos($JCTree* tree) {
	return $nc(this->posFunc)->applyAsInt(tree);
}

void clinit$TreeInfo$PosKind($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(TreeInfo$PosKind::START_POS, $new(TreeInfo$PosKind, "START_POS"_s, 0, static_cast<$ToIntFunction*>($$new(TreeInfo$PosKind$$Lambda$getStartPos))));
	$assignStatic(TreeInfo$PosKind::FIRST_STAT_POS, $new(TreeInfo$PosKind, "FIRST_STAT_POS"_s, 1, static_cast<$ToIntFunction*>($$new(TreeInfo$PosKind$$Lambda$firstStatPos$1))));
	$assignStatic(TreeInfo$PosKind::END_POS, $new(TreeInfo$PosKind, "END_POS"_s, 2, static_cast<$ToIntFunction*>($$new(TreeInfo$PosKind$$Lambda$endPos$2))));
	$assignStatic(TreeInfo$PosKind::$VALUES, TreeInfo$PosKind::$values());
}

TreeInfo$PosKind::TreeInfo$PosKind() {
}

$Class* TreeInfo$PosKind::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TreeInfo$PosKind$$Lambda$getStartPos::classInfo$.name)) {
			return TreeInfo$PosKind$$Lambda$getStartPos::load$(name, initialize);
		}
		if (name->equals(TreeInfo$PosKind$$Lambda$firstStatPos$1::classInfo$.name)) {
			return TreeInfo$PosKind$$Lambda$firstStatPos$1::load$(name, initialize);
		}
		if (name->equals(TreeInfo$PosKind$$Lambda$endPos$2::classInfo$.name)) {
			return TreeInfo$PosKind$$Lambda$endPos$2::load$(name, initialize);
		}
	}
	$loadClass(TreeInfo$PosKind, name, initialize, &_TreeInfo$PosKind_ClassInfo_, clinit$TreeInfo$PosKind, allocate$TreeInfo$PosKind);
	return class$;
}

$Class* TreeInfo$PosKind::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com