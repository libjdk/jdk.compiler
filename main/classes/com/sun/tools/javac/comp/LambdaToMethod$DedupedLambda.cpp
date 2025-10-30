#include <com/sun/tools/javac/comp/LambdaToMethod$DedupedLambda.h>

#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/LambdaToMethod.h>
#include <com/sun/tools/javac/comp/TreeDiffer.h>
#include <com/sun/tools/javac/comp/TreeHasher.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Collection.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $LambdaToMethod = ::com::sun::tools::javac::comp::LambdaToMethod;
using $TreeDiffer = ::com::sun::tools::javac::comp::TreeDiffer;
using $TreeHasher = ::com::sun::tools::javac::comp::TreeHasher;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Collection = ::java::util::Collection;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _LambdaToMethod$DedupedLambda_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/LambdaToMethod;", nullptr, $FINAL | $SYNTHETIC, $field(LambdaToMethod$DedupedLambda, this$0)},
	{"symbol", "Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $PRIVATE | $FINAL, $field(LambdaToMethod$DedupedLambda, symbol)},
	{"tree", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PRIVATE | $FINAL, $field(LambdaToMethod$DedupedLambda, tree)},
	{"hashCode", "I", nullptr, $PRIVATE, $field(LambdaToMethod$DedupedLambda, hashCode$)},
	{}
};

$MethodInfo _LambdaToMethod$DedupedLambda_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/LambdaToMethod;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, 0, $method(static_cast<void(LambdaToMethod$DedupedLambda::*)($LambdaToMethod*,$Symbol$MethodSymbol*,$JCTree*)>(&LambdaToMethod$DedupedLambda::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LambdaToMethod$DedupedLambda_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.LambdaToMethod$DedupedLambda", "com.sun.tools.javac.comp.LambdaToMethod", "DedupedLambda", 0},
	{}
};

$ClassInfo _LambdaToMethod$DedupedLambda_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.LambdaToMethod$DedupedLambda",
	"java.lang.Object",
	nullptr,
	_LambdaToMethod$DedupedLambda_FieldInfo_,
	_LambdaToMethod$DedupedLambda_MethodInfo_,
	nullptr,
	nullptr,
	_LambdaToMethod$DedupedLambda_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.LambdaToMethod"
};

$Object* allocate$LambdaToMethod$DedupedLambda($Class* clazz) {
	return $of($alloc(LambdaToMethod$DedupedLambda));
}

void LambdaToMethod$DedupedLambda::init$($LambdaToMethod* this$0, $Symbol$MethodSymbol* symbol, $JCTree* tree) {
	$set(this, this$0, this$0);
	$set(this, symbol, symbol);
	$set(this, tree, tree);
}

int32_t LambdaToMethod$DedupedLambda::hashCode() {
	int32_t hashCode = this->hashCode$;
	if (hashCode == 0) {
		this->hashCode$ = (hashCode = $TreeHasher::hash(this->tree, $(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(this->symbol)->params())))));
	}
	return hashCode;
}

bool LambdaToMethod$DedupedLambda::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	$var(LambdaToMethod$DedupedLambda, dedupedLambda, nullptr);
	bool var$2 = $instanceOf(LambdaToMethod$DedupedLambda, o);
	if (var$2) {
		$assign(dedupedLambda, $cast(LambdaToMethod$DedupedLambda, o));
		var$2 = true;
	}
	bool var$1 = (var$2);
	if (var$1) {
		$var($Type, var$3, $cast($Type, $nc(this->symbol)->asType()));
		var$1 = $nc(this->this$0->types)->isSameType(var$3, $($cast($Type, $nc($nc(dedupedLambda)->symbol)->asType())));
	}
	bool var$0 = var$1;
	if (var$0) {
		$var($Collection, var$4, static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(this->symbol)->params())));
		var$0 = $$new($TreeDiffer, var$4, $(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc($nc(dedupedLambda)->symbol)->params()))))->scan(this->tree, $nc(dedupedLambda)->tree);
	}
	return var$0;
}

LambdaToMethod$DedupedLambda::LambdaToMethod$DedupedLambda() {
}

$Class* LambdaToMethod$DedupedLambda::load$($String* name, bool initialize) {
	$loadClass(LambdaToMethod$DedupedLambda, name, initialize, &_LambdaToMethod$DedupedLambda_ClassInfo_, allocate$LambdaToMethod$DedupedLambda);
	return class$;
}

$Class* LambdaToMethod$DedupedLambda::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com