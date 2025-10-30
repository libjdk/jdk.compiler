#include <com/sun/tools/javac/comp/TreeHasher.h>

#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCLiteral.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCLiteral = ::com::sun::tools::javac::tree::JCTree$JCLiteral;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class TreeHasher$$Lambda$lambda$hash$0 : public $Consumer {
	$class(TreeHasher$$Lambda$lambda$hash$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Map* symbolHashes) {
		$set(this, symbolHashes, symbolHashes);
	}
	virtual void accept(Object$* s) override {
		TreeHasher::lambda$hash$0(symbolHashes, $cast($Symbol, s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TreeHasher$$Lambda$lambda$hash$0>());
	}
	$Map* symbolHashes = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TreeHasher$$Lambda$lambda$hash$0::fieldInfos[2] = {
	{"symbolHashes", "Ljava/util/Map;", nullptr, $PUBLIC, $field(TreeHasher$$Lambda$lambda$hash$0, symbolHashes)},
	{}
};
$MethodInfo TreeHasher$$Lambda$lambda$hash$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/Map;)V", nullptr, $PUBLIC, $method(static_cast<void(TreeHasher$$Lambda$lambda$hash$0::*)($Map*)>(&TreeHasher$$Lambda$lambda$hash$0::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TreeHasher$$Lambda$lambda$hash$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.TreeHasher$$Lambda$lambda$hash$0",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* TreeHasher$$Lambda$lambda$hash$0::load$($String* name, bool initialize) {
	$loadClass(TreeHasher$$Lambda$lambda$hash$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TreeHasher$$Lambda$lambda$hash$0::class$ = nullptr;

class TreeHasher$$Lambda$lambda$visitVarDef$1$1 : public $Function {
	$class(TreeHasher$$Lambda$lambda$visitVarDef$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$(TreeHasher* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* k) override {
		 return $of($nc(inst$)->lambda$visitVarDef$1($cast($Symbol, k)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TreeHasher$$Lambda$lambda$visitVarDef$1$1>());
	}
	TreeHasher* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TreeHasher$$Lambda$lambda$visitVarDef$1$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TreeHasher$$Lambda$lambda$visitVarDef$1$1, inst$)},
	{}
};
$MethodInfo TreeHasher$$Lambda$lambda$visitVarDef$1$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/TreeHasher;)V", nullptr, $PUBLIC, $method(static_cast<void(TreeHasher$$Lambda$lambda$visitVarDef$1$1::*)(TreeHasher*)>(&TreeHasher$$Lambda$lambda$visitVarDef$1$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo TreeHasher$$Lambda$lambda$visitVarDef$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.TreeHasher$$Lambda$lambda$visitVarDef$1$1",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* TreeHasher$$Lambda$lambda$visitVarDef$1$1::load$($String* name, bool initialize) {
	$loadClass(TreeHasher$$Lambda$lambda$visitVarDef$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TreeHasher$$Lambda$lambda$visitVarDef$1$1::class$ = nullptr;

$FieldInfo _TreeHasher_FieldInfo_[] = {
	{"symbolHashes", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Integer;>;", $PRIVATE | $FINAL, $field(TreeHasher, symbolHashes)},
	{"result", "I", nullptr, $PRIVATE, $field(TreeHasher, result)},
	{}
};

$MethodInfo _TreeHasher_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Map;)V", "(Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Integer;>;)V", $PUBLIC, $method(static_cast<void(TreeHasher::*)($Map*)>(&TreeHasher::init$))},
	{"hash", "(Lcom/sun/tools/javac/tree/JCTree;Ljava/util/Collection;)I", "(Lcom/sun/tools/javac/tree/JCTree;Ljava/util/Collection<+Lcom/sun/tools/javac/code/Symbol;>;)I", $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($JCTree*,$Collection*)>(&TreeHasher::hash))},
	{"hash", "(Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(TreeHasher::*)(Object$*)>(&TreeHasher::hash))},
	{"lambda$hash$0", "(Ljava/util/Map;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Map*,$Symbol*)>(&TreeHasher::lambda$hash$0))},
	{"lambda$visitVarDef$1", "(Lcom/sun/tools/javac/code/Symbol;)Ljava/lang/Integer;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Integer*(TreeHasher::*)($Symbol*)>(&TreeHasher::lambda$visitVarDef$1))},
	{"scan", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC},
	{"visitIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC},
	{"visitLiteral", "(Lcom/sun/tools/javac/tree/JCTree$JCLiteral;)V", nullptr, $PUBLIC},
	{"visitSelect", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)V", nullptr, $PUBLIC},
	{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TreeHasher_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.TreeHasher",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_TreeHasher_FieldInfo_,
	_TreeHasher_MethodInfo_
};

$Object* allocate$TreeHasher($Class* clazz) {
	return $of($alloc(TreeHasher));
}

void TreeHasher::init$($Map* symbolHashes) {
	$TreeScanner::init$();
	this->result = 17;
	$set(this, symbolHashes, $cast($Map, $Objects::requireNonNull(symbolHashes)));
}

int32_t TreeHasher::hash($JCTree* tree, $Collection* symbols) {
	$init(TreeHasher);
	$useLocalCurrentObjectStackCache();
	if (tree == nullptr) {
		return 0;
	}
	$var($Map, symbolHashes, $new($HashMap));
	$nc(symbols)->forEach(static_cast<$Consumer*>($$new(TreeHasher$$Lambda$lambda$hash$0, symbolHashes)));
	$var(TreeHasher, hasher, $new(TreeHasher, symbolHashes));
	$nc(tree)->accept(hasher);
	return hasher->result;
}

void TreeHasher::hash(Object$* object) {
	this->result = 31 * this->result + $Objects::hashCode(object);
}

void TreeHasher::scan($JCTree* tree$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($JCTree, tree, tree$renamed);
	if (tree == nullptr) {
		return;
	}
	$assign(tree, $TreeInfo::skipParens(tree));
	if ($nc(tree)->type != nullptr) {
		$var($Object, value, $nc(tree->type)->constValue());
		if (value != nullptr) {
			hash(value);
			return;
		}
	}
	hash($($nc(tree)->getTag()));
	$nc(tree)->accept(this);
}

void TreeHasher::visitLiteral($JCTree$JCLiteral* tree) {
	hash($nc(tree)->value);
	$TreeScanner::visitLiteral(tree);
}

void TreeHasher::visitIdent($JCTree$JCIdent* tree) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, sym, $nc(tree)->sym);
	if (sym != nullptr) {
		$var($Integer, hash, $cast($Integer, $nc(this->symbolHashes)->get(sym)));
		if (hash != nullptr) {
			this->hash(hash);
			return;
		}
	}
	this->hash(sym);
}

void TreeHasher::visitSelect($JCTree$JCFieldAccess* tree) {
	hash($nc(tree)->sym);
	$TreeScanner::visitSelect(tree);
}

void TreeHasher::visitVarDef($JCTree$JCVariableDecl* tree) {
	$nc(this->symbolHashes)->computeIfAbsent($nc(tree)->sym, static_cast<$Function*>($$new(TreeHasher$$Lambda$lambda$visitVarDef$1$1, this)));
	$TreeScanner::visitVarDef(tree);
}

$Integer* TreeHasher::lambda$visitVarDef$1($Symbol* k) {
	return $Integer::valueOf($nc(this->symbolHashes)->size());
}

void TreeHasher::lambda$hash$0($Map* symbolHashes, $Symbol* s) {
	$init(TreeHasher);
	$nc(symbolHashes)->put(s, $($Integer::valueOf(symbolHashes->size())));
}

TreeHasher::TreeHasher() {
}

$Class* TreeHasher::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TreeHasher$$Lambda$lambda$hash$0::classInfo$.name)) {
			return TreeHasher$$Lambda$lambda$hash$0::load$(name, initialize);
		}
		if (name->equals(TreeHasher$$Lambda$lambda$visitVarDef$1$1::classInfo$.name)) {
			return TreeHasher$$Lambda$lambda$visitVarDef$1$1::load$(name, initialize);
		}
	}
	$loadClass(TreeHasher, name, initialize, &_TreeHasher_ClassInfo_, allocate$TreeHasher);
	return class$;
}

$Class* TreeHasher::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com