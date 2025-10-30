#include <com/sun/tools/javac/processing/JavacProcessingEnvironment$1.h>

#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$RecordComponent.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Modules.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment$ImplicitCompleter.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotation.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssignOp.h>
#include <com/sun/tools/javac/tree/JCTree$JCBinary.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCUnary.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/Stream.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef GENERATEDCONSTR
#undef METHODDEF
#undef SOURCE

using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$RecordComponent = ::com::sun::tools::javac::code::Symbol$RecordComponent;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Modules = ::com::sun::tools::javac::comp::Modules;
using $JavacProcessingEnvironment = ::com::sun::tools::javac::processing::JavacProcessingEnvironment;
using $JavacProcessingEnvironment$ImplicitCompleter = ::com::sun::tools::javac::processing::JavacProcessingEnvironment$ImplicitCompleter;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAnnotation = ::com::sun::tools::javac::tree::JCTree$JCAnnotation;
using $JCTree$JCAssignOp = ::com::sun::tools::javac::tree::JCTree$JCAssignOp;
using $JCTree$JCBinary = ::com::sun::tools::javac::tree::JCTree$JCBinary;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCOperatorExpression = ::com::sun::tools::javac::tree::JCTree$JCOperatorExpression;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCUnary = ::com::sun::tools::javac::tree::JCTree$JCUnary;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $List = ::com::sun::tools::javac::util::List;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $Consumer = ::java::util::function::Consumer;
using $Stream = ::java::util::stream::Stream;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

class JavacProcessingEnvironment$1$$Lambda$lambda$visitTopLevel$0 : public $Symbol$Completer {
	$class(JavacProcessingEnvironment$1$$Lambda$lambda$visitTopLevel$0, $NO_CLASS_INIT, $Symbol$Completer)
public:
	void init$(JavacProcessingEnvironment$1* inst, $JCTree$JCCompilationUnit* node) {
		$set(this, inst$, inst);
		$set(this, node, node);
	}
	virtual void complete($Symbol* sym) override {
		$nc(inst$)->lambda$visitTopLevel$0(node, sym);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacProcessingEnvironment$1$$Lambda$lambda$visitTopLevel$0>());
	}
	JavacProcessingEnvironment$1* inst$ = nullptr;
	$JCTree$JCCompilationUnit* node = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JavacProcessingEnvironment$1$$Lambda$lambda$visitTopLevel$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JavacProcessingEnvironment$1$$Lambda$lambda$visitTopLevel$0, inst$)},
	{"node", "Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;", nullptr, $PUBLIC, $field(JavacProcessingEnvironment$1$$Lambda$lambda$visitTopLevel$0, node)},
	{}
};
$MethodInfo JavacProcessingEnvironment$1$$Lambda$lambda$visitTopLevel$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/processing/JavacProcessingEnvironment$1;Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)V", nullptr, $PUBLIC, $method(static_cast<void(JavacProcessingEnvironment$1$$Lambda$lambda$visitTopLevel$0::*)(JavacProcessingEnvironment$1*,$JCTree$JCCompilationUnit*)>(&JavacProcessingEnvironment$1$$Lambda$lambda$visitTopLevel$0::init$))},
	{"complete", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacProcessingEnvironment$1$$Lambda$lambda$visitTopLevel$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.processing.JavacProcessingEnvironment$1$$Lambda$lambda$visitTopLevel$0",
	"java.lang.Object",
	"com.sun.tools.javac.code.Symbol$Completer",
	fieldInfos,
	methodInfos
};
$Class* JavacProcessingEnvironment$1$$Lambda$lambda$visitTopLevel$0::load$($String* name, bool initialize) {
	$loadClass(JavacProcessingEnvironment$1$$Lambda$lambda$visitTopLevel$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacProcessingEnvironment$1$$Lambda$lambda$visitTopLevel$0::class$ = nullptr;

class JavacProcessingEnvironment$1$$Lambda$lambda$visitClassDef$1$1 : public $Consumer {
	$class(JavacProcessingEnvironment$1$$Lambda$lambda$visitClassDef$1$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$(JavacProcessingEnvironment$1* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* a) override {
		$nc(inst$)->lambda$visitClassDef$1($cast($JCTree$JCAnnotation, a));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavacProcessingEnvironment$1$$Lambda$lambda$visitClassDef$1$1>());
	}
	JavacProcessingEnvironment$1* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JavacProcessingEnvironment$1$$Lambda$lambda$visitClassDef$1$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JavacProcessingEnvironment$1$$Lambda$lambda$visitClassDef$1$1, inst$)},
	{}
};
$MethodInfo JavacProcessingEnvironment$1$$Lambda$lambda$visitClassDef$1$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/processing/JavacProcessingEnvironment$1;)V", nullptr, $PUBLIC, $method(static_cast<void(JavacProcessingEnvironment$1$$Lambda$lambda$visitClassDef$1$1::*)(JavacProcessingEnvironment$1*)>(&JavacProcessingEnvironment$1$$Lambda$lambda$visitClassDef$1$1::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavacProcessingEnvironment$1$$Lambda$lambda$visitClassDef$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.processing.JavacProcessingEnvironment$1$$Lambda$lambda$visitClassDef$1$1",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* JavacProcessingEnvironment$1$$Lambda$lambda$visitClassDef$1$1::load$($String* name, bool initialize) {
	$loadClass(JavacProcessingEnvironment$1$$Lambda$lambda$visitClassDef$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavacProcessingEnvironment$1$$Lambda$lambda$visitClassDef$1$1::class$ = nullptr;

$FieldInfo _JavacProcessingEnvironment$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/processing/JavacProcessingEnvironment;", nullptr, $FINAL | $SYNTHETIC, $field(JavacProcessingEnvironment$1, this$0)},
	{"topLevel", "Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;", nullptr, 0, $field(JavacProcessingEnvironment$1, topLevel)},
	{}
};

$MethodInfo _JavacProcessingEnvironment$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/processing/JavacProcessingEnvironment;)V", nullptr, 0, $method(static_cast<void(JavacProcessingEnvironment$1::*)($JavacProcessingEnvironment*)>(&JavacProcessingEnvironment$1::init$))},
	{"lambda$visitClassDef$1", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(JavacProcessingEnvironment$1::*)($JCTree$JCAnnotation*)>(&JavacProcessingEnvironment$1::lambda$visitClassDef$1))},
	{"lambda$visitTopLevel$0", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(JavacProcessingEnvironment$1::*)($JCTree$JCCompilationUnit*,$Symbol*)>(&JavacProcessingEnvironment$1::lambda$visitTopLevel$0)), "com.sun.tools.javac.code.Symbol$CompletionFailure"},
	{"scan", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC},
	{"visitAnnotation", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;)V", nullptr, $PUBLIC},
	{"visitAssignop", "(Lcom/sun/tools/javac/tree/JCTree$JCAssignOp;)V", nullptr, $PUBLIC},
	{"visitBinary", "(Lcom/sun/tools/javac/tree/JCTree$JCBinary;)V", nullptr, $PUBLIC},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC},
	{"visitMethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC},
	{"visitNewClass", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", nullptr, $PUBLIC},
	{"visitSelect", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)V", nullptr, $PUBLIC},
	{"visitTopLevel", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)V", nullptr, $PUBLIC},
	{"visitUnary", "(Lcom/sun/tools/javac/tree/JCTree$JCUnary;)V", nullptr, $PUBLIC},
	{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JavacProcessingEnvironment$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.processing.JavacProcessingEnvironment",
	nullptr,
	nullptr
};

$InnerClassInfo _JavacProcessingEnvironment$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.processing.JavacProcessingEnvironment$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavacProcessingEnvironment$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.processing.JavacProcessingEnvironment$1",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_JavacProcessingEnvironment$1_FieldInfo_,
	_JavacProcessingEnvironment$1_MethodInfo_,
	nullptr,
	&_JavacProcessingEnvironment$1_EnclosingMethodInfo_,
	_JavacProcessingEnvironment$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.processing.JavacProcessingEnvironment"
};

$Object* allocate$JavacProcessingEnvironment$1($Class* clazz) {
	return $of($alloc(JavacProcessingEnvironment$1));
}

void JavacProcessingEnvironment$1::init$($JavacProcessingEnvironment* this$0) {
	$set(this, this$0, this$0);
	$TreeScanner::init$();
}

void JavacProcessingEnvironment$1::scan($JCTree* node) {
	$TreeScanner::scan(node);
	if (node != nullptr) {
		$set(node, type, nullptr);
	}
}

void JavacProcessingEnvironment$1::visitTopLevel($JCTree$JCCompilationUnit* node) {
	if ($nc(node)->packge != nullptr) {
		$init($JavaFileObject$Kind);
		if (this->this$0->isPkgInfo(node->sourcefile, $JavaFileObject$Kind::SOURCE)) {
			$nc($nc(node->packge)->package_info)->reset();
		}
		$nc(node->packge)->reset();
	}
	$init($JavaFileObject$Kind);
	if (this->this$0->isModuleInfo($nc(node)->sourcefile, $JavaFileObject$Kind::SOURCE)) {
		$nc($nc(node)->modle)->reset();
		$set($nc(node->modle), completer, static_cast<$Symbol$Completer*>($new(JavacProcessingEnvironment$1$$Lambda$lambda$visitTopLevel$0, this, node)));
		$nc($nc(node->modle)->module_info)->reset();
		$set($nc($nc(node->modle)->module_info), members_field, $Scope$WriteableScope::create($nc(node->modle)->module_info));
	}
	$set($nc(node), packge, nullptr);
	$set(this, topLevel, node);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$TreeScanner::visitTopLevel(node);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, topLevel, nullptr);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JavacProcessingEnvironment$1::visitClassDef($JCTree$JCClassDecl* node) {
	$useLocalCurrentObjectStackCache();
	$TreeScanner::visitClassDef(node);
	$var($List, beforeConstructor, $List::nil());
	$var($List, defs, $nc(node)->defs);
	while (true) {
		bool var$0 = $nc(defs)->nonEmpty();
		$init($JCTree$Tag);
		if (!(var$0 && !$nc(($cast($JCTree, defs->head)))->hasTag($JCTree$Tag::METHODDEF))) {
			break;
		}
		{
			$assign(beforeConstructor, $nc(beforeConstructor)->prepend($cast($JCTree, defs->head)));
			$assign(defs, defs->tail);
		}
	}
	if ($nc(defs)->nonEmpty() && ((int64_t)($nc($nc(($cast($JCTree$JCMethodDecl, defs->head)))->mods)->flags & (uint64_t)$Flags::GENERATEDCONSTR)) != 0) {
		$assign(defs, defs->tail);
		while ($nc(beforeConstructor)->nonEmpty()) {
			$assign(defs, $nc(defs)->prepend($cast($JCTree, beforeConstructor->head)));
			$assign(beforeConstructor, beforeConstructor->tail);
		}
		$set(node, defs, defs);
	}
	if (node->sym != nullptr) {
		$set($nc(node->sym), completer, $new($JavacProcessingEnvironment$ImplicitCompleter, this->this$0, this->topLevel));
		$var($List, recordComponents, $nc(node->sym)->getRecordComponents());
		{
			$var($Iterator, i$, $nc(recordComponents)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol$RecordComponent, rc, $cast($Symbol$RecordComponent, i$->next()));
				{
					$var($List, originalAnnos, $nc(rc)->getOriginalAnnos());
					$nc($($nc(originalAnnos)->stream()))->forEach(static_cast<$Consumer*>($$new(JavacProcessingEnvironment$1$$Lambda$lambda$visitClassDef$1$1, this)));
				}
			}
		}
		$set($nc(node->sym), permitted, $List::nil());
	}
	$set(node, sym, nullptr);
}

void JavacProcessingEnvironment$1::visitMethodDef($JCTree$JCMethodDecl* node) {
	bool var$2 = $TreeInfo::isConstructor(node) && $nc(node)->sym != nullptr;
	bool var$1 = var$2 && $nc($nc(node->sym)->owner)->isEnum();
	bool var$0 = var$1 && $nc($nc(node->body)->stats)->nonEmpty();
	if (var$0 && $TreeInfo::isSuperCall($cast($JCTree, $nc($nc(node->body)->stats)->head)) && $nc(($cast($JCTree$JCStatement, $nc($nc(node->body)->stats)->head)))->pos$ == $nc(node->body)->pos$) {
		$set($nc(node->body), stats, $nc($nc(node->body)->stats)->tail);
	}
	$set($nc(node), sym, nullptr);
	$TreeScanner::visitMethodDef(node);
}

void JavacProcessingEnvironment$1::visitVarDef($JCTree$JCVariableDecl* node) {
	$set($nc(node), sym, nullptr);
	$TreeScanner::visitVarDef(node);
}

void JavacProcessingEnvironment$1::visitNewClass($JCTree$JCNewClass* node) {
	$set($nc(node), constructor, nullptr);
	$TreeScanner::visitNewClass(node);
}

void JavacProcessingEnvironment$1::visitAssignop($JCTree$JCAssignOp* node) {
	$set($nc(node), operator$, nullptr);
	$TreeScanner::visitAssignop(node);
}

void JavacProcessingEnvironment$1::visitUnary($JCTree$JCUnary* node) {
	$set($nc(node), operator$, nullptr);
	$TreeScanner::visitUnary(node);
}

void JavacProcessingEnvironment$1::visitBinary($JCTree$JCBinary* node) {
	$set($nc(node), operator$, nullptr);
	$TreeScanner::visitBinary(node);
}

void JavacProcessingEnvironment$1::visitSelect($JCTree$JCFieldAccess* node) {
	$set($nc(node), sym, nullptr);
	$TreeScanner::visitSelect(node);
}

void JavacProcessingEnvironment$1::visitIdent($JCTree$JCIdent* node) {
	$set($nc(node), sym, nullptr);
	$TreeScanner::visitIdent(node);
}

void JavacProcessingEnvironment$1::visitAnnotation($JCTree$JCAnnotation* node) {
	$set($nc(node), attribute, nullptr);
	$TreeScanner::visitAnnotation(node);
}

void JavacProcessingEnvironment$1::lambda$visitClassDef$1($JCTree$JCAnnotation* a) {
	visitAnnotation(a);
}

void JavacProcessingEnvironment$1::lambda$visitTopLevel$0($JCTree$JCCompilationUnit* node, $Symbol* sym) {
	$nc(this->this$0->modules)->enter($($List::of(node)), $nc($nc(node)->modle)->module_info);
}

JavacProcessingEnvironment$1::JavacProcessingEnvironment$1() {
}

$Class* JavacProcessingEnvironment$1::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JavacProcessingEnvironment$1$$Lambda$lambda$visitTopLevel$0::classInfo$.name)) {
			return JavacProcessingEnvironment$1$$Lambda$lambda$visitTopLevel$0::load$(name, initialize);
		}
		if (name->equals(JavacProcessingEnvironment$1$$Lambda$lambda$visitClassDef$1$1::classInfo$.name)) {
			return JavacProcessingEnvironment$1$$Lambda$lambda$visitClassDef$1$1::load$(name, initialize);
		}
	}
	$loadClass(JavacProcessingEnvironment$1, name, initialize, &_JavacProcessingEnvironment$1_ClassInfo_, allocate$JavacProcessingEnvironment$1);
	return class$;
}

$Class* JavacProcessingEnvironment$1::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com