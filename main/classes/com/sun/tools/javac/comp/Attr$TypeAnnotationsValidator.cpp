#include <com/sun/tools/javac/comp/Attr$TypeAnnotationsValidator.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeAnnotations$AnnotationType.h>
#include <com/sun/tools/javac/code/TypeAnnotations.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotatedType.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotation.h>
#include <com/sun/tools/javac/tree/JCTree$JCArrayTypeTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCInstanceOf.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewArray.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeApply.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeCast.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeIntersection.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeParameter.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeUnion.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCWildcard.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef ANNOTATED_TYPE
#undef CLASSDEF
#undef DECLARATION
#undef ERRONEOUS
#undef EXTENDS_WILDCARD
#undef IDENT
#undef NONE
#undef PRIMITIVE_TYPE
#undef SELECT
#undef SUPER_WILDCARD
#undef TYPEAPPLY
#undef TYPEARRAY
#undef TYPEINTERSECTION
#undef TYPEUNION
#undef WILDCARD

using $Tree = ::com::sun::source::tree::Tree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeAnnotations = ::com::sun::tools::javac::code::TypeAnnotations;
using $TypeAnnotations$AnnotationType = ::com::sun::tools::javac::code::TypeAnnotations$AnnotationType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Check = ::com::sun::tools::javac::comp::Check;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAnnotatedType = ::com::sun::tools::javac::tree::JCTree$JCAnnotatedType;
using $JCTree$JCAnnotation = ::com::sun::tools::javac::tree::JCTree$JCAnnotation;
using $JCTree$JCArrayTypeTree = ::com::sun::tools::javac::tree::JCTree$JCArrayTypeTree;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCInstanceOf = ::com::sun::tools::javac::tree::JCTree$JCInstanceOf;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCNewArray = ::com::sun::tools::javac::tree::JCTree$JCNewArray;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCPattern = ::com::sun::tools::javac::tree::JCTree$JCPattern;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCTypeApply = ::com::sun::tools::javac::tree::JCTree$JCTypeApply;
using $JCTree$JCTypeCast = ::com::sun::tools::javac::tree::JCTree$JCTypeCast;
using $JCTree$JCTypeIntersection = ::com::sun::tools::javac::tree::JCTree$JCTypeIntersection;
using $JCTree$JCTypeParameter = ::com::sun::tools::javac::tree::JCTree$JCTypeParameter;
using $JCTree$JCTypeUnion = ::com::sun::tools::javac::tree::JCTree$JCTypeUnion;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$JCWildcard = ::com::sun::tools::javac::tree::JCTree$JCWildcard;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $1List = ::java::util::List;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Attr$TypeAnnotationsValidator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$TypeAnnotationsValidator, this$0)},
	{"sigOnly", "Z", nullptr, $PRIVATE | $FINAL, $field(Attr$TypeAnnotationsValidator, sigOnly)},
	{}
};

$MethodInfo _Attr$TypeAnnotationsValidator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Attr$TypeAnnotationsValidator::*)($Attr*,bool)>(&Attr$TypeAnnotationsValidator::init$))},
	{"checkForDeclarationAnnotations", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol;)V", "(Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;Lcom/sun/tools/javac/code/Symbol;)V", $PRIVATE, $method(static_cast<void(Attr$TypeAnnotationsValidator::*)($List*,$Symbol*)>(&Attr$TypeAnnotationsValidator::checkForDeclarationAnnotations))},
	{"validateAnnotatedType", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PRIVATE, $method(static_cast<void(Attr$TypeAnnotationsValidator::*)($JCTree*,$Type*)>(&Attr$TypeAnnotationsValidator::validateAnnotatedType))},
	{"visitAnnotatedType", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotatedType;)V", nullptr, $PUBLIC},
	{"visitAnnotation", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;)V", nullptr, $PUBLIC},
	{"visitBlock", "(Lcom/sun/tools/javac/tree/JCTree$JCBlock;)V", nullptr, $PUBLIC},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitMethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC},
	{"visitNewArray", "(Lcom/sun/tools/javac/tree/JCTree$JCNewArray;)V", nullptr, $PUBLIC},
	{"visitNewClass", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", nullptr, $PUBLIC},
	{"visitTypeCast", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeCast;)V", nullptr, $PUBLIC},
	{"visitTypeParameter", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;)V", nullptr, $PUBLIC},
	{"visitTypeTest", "(Lcom/sun/tools/javac/tree/JCTree$JCInstanceOf;)V", nullptr, $PUBLIC},
	{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Attr$TypeAnnotationsValidator_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Attr$TypeAnnotationsValidator", "com.sun.tools.javac.comp.Attr", "TypeAnnotationsValidator", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _Attr$TypeAnnotationsValidator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.tools.javac.comp.Attr$TypeAnnotationsValidator",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_Attr$TypeAnnotationsValidator_FieldInfo_,
	_Attr$TypeAnnotationsValidator_MethodInfo_,
	nullptr,
	nullptr,
	_Attr$TypeAnnotationsValidator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Attr"
};

$Object* allocate$Attr$TypeAnnotationsValidator($Class* clazz) {
	return $of($alloc(Attr$TypeAnnotationsValidator));
}

void Attr$TypeAnnotationsValidator::init$($Attr* this$0, bool sigOnly) {
	$set(this, this$0, this$0);
	$TreeScanner::init$();
	this->sigOnly = sigOnly;
}

void Attr$TypeAnnotationsValidator::visitAnnotation($JCTree$JCAnnotation* tree) {
	$nc(this->this$0->chk)->validateTypeAnnotation(tree, false);
	$TreeScanner::visitAnnotation(tree);
}

void Attr$TypeAnnotationsValidator::visitAnnotatedType($JCTree$JCAnnotatedType* tree) {
	if (!$nc($nc($nc(tree)->underlyingType)->type)->isErroneous()) {
		$TreeScanner::visitAnnotatedType(tree);
	}
}

void Attr$TypeAnnotationsValidator::visitTypeParameter($JCTree$JCTypeParameter* tree) {
	$nc(this->this$0->chk)->validateTypeAnnotations($nc(tree)->annotations, true);
	scan($nc(tree)->bounds);
}

void Attr$TypeAnnotationsValidator::visitMethodDef($JCTree$JCMethodDecl* tree) {
	if ($nc(tree)->recvparam != nullptr && !$nc($nc($nc(tree->recvparam)->vartype)->type)->isErroneous()) {
		checkForDeclarationAnnotations($nc($nc(tree->recvparam)->mods)->annotations, $nc(tree->recvparam)->sym);
	}
	if ($nc(tree)->restype != nullptr && $nc(tree->restype)->type != nullptr) {
		validateAnnotatedType(tree->restype, $nc(tree->restype)->type);
	}
	if (this->sigOnly) {
		scan(static_cast<$JCTree*>($nc(tree)->mods));
		scan(static_cast<$JCTree*>($nc(tree)->restype));
		scan($nc(tree)->typarams);
		scan(static_cast<$JCTree*>($nc(tree)->recvparam));
		scan($nc(tree)->params);
		scan($nc(tree)->thrown);
	} else {
		scan(static_cast<$JCTree*>($nc(tree)->defaultValue));
		scan(static_cast<$JCTree*>($nc(tree)->body));
	}
}

void Attr$TypeAnnotationsValidator::visitVarDef($JCTree$JCVariableDecl* tree) {
	if ($nc(tree)->sym != nullptr && $nc(tree->sym)->type != nullptr && !tree->isImplicitlyTyped()) {
		validateAnnotatedType(tree->vartype, $nc(tree->sym)->type);
	}
	scan(static_cast<$JCTree*>($nc(tree)->mods));
	scan(static_cast<$JCTree*>($nc(tree)->vartype));
	if (!this->sigOnly) {
		scan(static_cast<$JCTree*>($nc(tree)->init));
	}
}

void Attr$TypeAnnotationsValidator::visitTypeCast($JCTree$JCTypeCast* tree) {
	if ($nc(tree)->clazz != nullptr && $nc(tree->clazz)->type != nullptr) {
		validateAnnotatedType(tree->clazz, $nc(tree->clazz)->type);
	}
	$TreeScanner::visitTypeCast(tree);
}

void Attr$TypeAnnotationsValidator::visitTypeTest($JCTree$JCInstanceOf* tree) {
	if ($nc(tree)->pattern != nullptr && !($instanceOf($JCTree$JCPattern, tree->pattern)) && $nc(tree->pattern)->type != nullptr) {
		validateAnnotatedType(tree->pattern, $nc(tree->pattern)->type);
	}
	$TreeScanner::visitTypeTest(tree);
}

void Attr$TypeAnnotationsValidator::visitNewClass($JCTree$JCNewClass* tree) {
	if ($nc(tree)->clazz != nullptr && $nc(tree->clazz)->type != nullptr) {
		$init($JCTree$Tag);
		if ($nc(tree->clazz)->hasTag($JCTree$Tag::ANNOTATED_TYPE)) {
			checkForDeclarationAnnotations($nc(($cast($JCTree$JCAnnotatedType, tree->clazz)))->annotations, $nc($nc(tree->clazz)->type)->tsym);
		}
		if (tree->def != nullptr) {
			checkForDeclarationAnnotations($nc($nc(tree->def)->mods)->annotations, $nc($nc(tree->clazz)->type)->tsym);
		}
		validateAnnotatedType(tree->clazz, $nc(tree->clazz)->type);
	}
	$TreeScanner::visitNewClass(tree);
}

void Attr$TypeAnnotationsValidator::visitNewArray($JCTree$JCNewArray* tree) {
	if ($nc(tree)->elemtype != nullptr && $nc(tree->elemtype)->type != nullptr) {
		$init($JCTree$Tag);
		if ($nc(tree->elemtype)->hasTag($JCTree$Tag::ANNOTATED_TYPE)) {
			checkForDeclarationAnnotations($nc(($cast($JCTree$JCAnnotatedType, tree->elemtype)))->annotations, $nc($nc(tree->elemtype)->type)->tsym);
		}
		validateAnnotatedType(tree->elemtype, $nc(tree->elemtype)->type);
	}
	$TreeScanner::visitNewArray(tree);
}

void Attr$TypeAnnotationsValidator::visitClassDef($JCTree$JCClassDecl* tree) {
	$useLocalCurrentObjectStackCache();
	if (this->sigOnly) {
		scan(static_cast<$JCTree*>($nc(tree)->mods));
		scan($nc(tree)->typarams);
		scan(static_cast<$JCTree*>($nc(tree)->extending));
		scan($nc(tree)->implementing);
	}
	{
		$var($Iterator, i$, $nc($nc(tree)->defs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree, member, $cast($JCTree, i$->next()));
			{
				$init($JCTree$Tag);
				if ($nc(member)->hasTag($JCTree$Tag::CLASSDEF)) {
					continue;
				}
				scan(member);
			}
		}
	}
}

void Attr$TypeAnnotationsValidator::visitBlock($JCTree$JCBlock* tree) {
	if (!this->sigOnly) {
		scan($nc(tree)->stats);
	}
}

void Attr$TypeAnnotationsValidator::validateAnnotatedType($JCTree* errtree, $Type* type) {
	$useLocalCurrentObjectStackCache();
	if ($nc(type)->isPrimitiveOrVoid()) {
		return;
	}
	$var($JCTree, enclTr, errtree);
	$var($Type, enclTy, type);
	bool repeat = true;
	while (repeat) {
		$init($JCTree$Tag);
		if ($nc(enclTr)->hasTag($JCTree$Tag::TYPEAPPLY)) {
			$var($List, tyargs, $nc(enclTy)->getTypeArguments());
			$var($List, trargs, $cast($List, $nc(($cast($JCTree$JCTypeApply, enclTr)))->getTypeArguments()));
			if ($nc(trargs)->length() > 0) {
				int32_t var$0 = $nc(tyargs)->length();
				if (var$0 == trargs->length()) {
					for (int32_t i = 0; i < tyargs->length(); ++i) {
						$var($JCTree, var$1, $cast($JCTree, trargs->get(i)));
						validateAnnotatedType(var$1, $cast($Type, $(tyargs->get(i))));
					}
				}
			}
			$assign(enclTr, $nc(($cast($JCTree$JCTypeApply, enclTr)))->clazz);
		}
		if ($nc(enclTr)->hasTag($JCTree$Tag::SELECT)) {
			$assign(enclTr, $cast($JCTree, $nc(($cast($JCTree$JCFieldAccess, enclTr)))->getExpression()));
			$init($TypeTag);
			if (enclTy != nullptr && !enclTy->hasTag($TypeTag::NONE)) {
				$assign(enclTy, enclTy->getEnclosingType());
			}
		} else {
			if (enclTr->hasTag($JCTree$Tag::ANNOTATED_TYPE)) {
				$var($JCTree$JCAnnotatedType, at, $cast($JCTree$JCAnnotatedType, enclTr));
				$init($TypeTag);
				if (enclTy == nullptr || $nc(enclTy)->hasTag($TypeTag::NONE)) {
					if ($nc($($cast($List, at->getAnnotations())))->size() == 1) {
						$var($JCDiagnostic$DiagnosticPosition, var$2, $nc(at->underlyingType)->pos());
						$nc(this->this$0->log)->error(var$2, $($CompilerProperties$Errors::CantTypeAnnotateScoping1($nc(($cast($JCTree$JCAnnotation, $nc($($cast($List, at->getAnnotations())))->head)))->attribute)));
					} else {
						$var($ListBuffer, comps, $new($ListBuffer));
						{
							$var($Iterator, i$, $nc($($cast($List, at->getAnnotations())))->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($JCTree$JCAnnotation, an, $cast($JCTree$JCAnnotation, i$->next()));
								{
									comps->add($nc(an)->attribute);
								}
							}
						}
						$var($JCDiagnostic$DiagnosticPosition, var$3, $nc(at->underlyingType)->pos());
						$nc(this->this$0->log)->error(var$3, $($CompilerProperties$Errors::CantTypeAnnotateScoping($(comps->toList()))));
					}
					repeat = false;
				}
				$assign(enclTr, at->underlyingType);
			} else {
				if (enclTr->hasTag($JCTree$Tag::IDENT)) {
					repeat = false;
				} else {
					if (enclTr->hasTag($JCTree$Tag::WILDCARD)) {
						$var($JCTree$JCWildcard, wc, $cast($JCTree$JCWildcard, enclTr));
						$init($Tree$Kind);
						bool var$4 = wc->getKind() == $Tree$Kind::EXTENDS_WILDCARD;
						if (var$4 || wc->getKind() == $Tree$Kind::SUPER_WILDCARD) {
							$var($JCTree, var$5, wc->getBound());
							validateAnnotatedType(var$5, $nc($(wc->getBound()))->type);
						} else {
						}
						repeat = false;
					} else {
						if (enclTr->hasTag($JCTree$Tag::TYPEARRAY)) {
							$var($JCTree$JCArrayTypeTree, art, $cast($JCTree$JCArrayTypeTree, enclTr));
							validateAnnotatedType($(art->getType()), $nc(art->elemtype)->type);
							repeat = false;
						} else {
							if (enclTr->hasTag($JCTree$Tag::TYPEUNION)) {
								$var($JCTree$JCTypeUnion, ut, $cast($JCTree$JCTypeUnion, enclTr));
								{
									$var($Iterator, i$, $nc($($cast($List, ut->getTypeAlternatives())))->iterator());
									for (; $nc(i$)->hasNext();) {
										$var($JCTree, t, $cast($JCTree, i$->next()));
										{
											validateAnnotatedType(t, $nc(t)->type);
										}
									}
								}
								repeat = false;
							} else {
								if (enclTr->hasTag($JCTree$Tag::TYPEINTERSECTION)) {
									$var($JCTree$JCTypeIntersection, it, $cast($JCTree$JCTypeIntersection, enclTr));
									{
										$var($Iterator, i$, $nc($($cast($List, it->getBounds())))->iterator());
										for (; $nc(i$)->hasNext();) {
											$var($JCTree, t, $cast($JCTree, i$->next()));
											{
												validateAnnotatedType(t, $nc(t)->type);
											}
										}
									}
									repeat = false;
								} else {
									$init($Tree$Kind);
									bool var$7 = enclTr->getKind() == $Tree$Kind::PRIMITIVE_TYPE;
									if (var$7 || enclTr->getKind() == $Tree$Kind::ERRONEOUS) {
										repeat = false;
									} else {
										$var($String, var$12, $$str({"Unexpected tree: "_s, enclTr, " with kind: "_s}));
										$var($String, var$11, $$concat(var$12, $(enclTr->getKind())));
										$var($String, var$10, $$concat(var$11, " within: "));
										$var($String, var$9, $$concat(var$10, $(errtree)));
										$var($String, var$8, $$concat(var$9, " with kind: "));
										$Assert::error($$concat(var$8, $($nc(errtree)->getKind())));
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void Attr$TypeAnnotationsValidator::checkForDeclarationAnnotations($List* annotations, $Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(annotations)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCAnnotation, ai, $cast($JCTree$JCAnnotation, i$->next()));
			{
				bool var$0 = !$nc($nc(ai)->type)->isErroneous();
				$init($TypeAnnotations$AnnotationType);
				if (var$0 && $nc(this->this$0->typeAnnotations)->annotationTargetType(ai->attribute, sym) == $TypeAnnotations$AnnotationType::DECLARATION) {
					$var($JCDiagnostic$DiagnosticPosition, var$1, ai->pos());
					$nc(this->this$0->log)->error(var$1, $($CompilerProperties$Errors::AnnotationTypeNotApplicableToType(ai->type)));
				}
			}
		}
	}
}

Attr$TypeAnnotationsValidator::Attr$TypeAnnotationsValidator() {
}

$Class* Attr$TypeAnnotationsValidator::load$($String* name, bool initialize) {
	$loadClass(Attr$TypeAnnotationsValidator, name, initialize, &_Attr$TypeAnnotationsValidator_ClassInfo_, allocate$Attr$TypeAnnotationsValidator);
	return class$;
}

$Class* Attr$TypeAnnotationsValidator::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com