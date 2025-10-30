#include <com/sun/tools/javac/api/JavacTrees$1.h>

#include <com/sun/source/doctree/DocCommentTree.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTree.h>
#include <com/sun/source/tree/CompilationUnitTree.h>
#include <com/sun/source/tree/Tree.h>
#include <com/sun/tools/javac/api/JavacTrees$8.h>
#include <com/sun/tools/javac/api/JavacTrees.h>
#include <com/sun/tools/javac/parser/Tokens$Comment.h>
#include <com/sun/tools/javac/tree/DCTree$DCBlockTag.h>
#include <com/sun/tools/javac/tree/DCTree$DCComment.h>
#include <com/sun/tools/javac/tree/DCTree$DCDocComment.h>
#include <com/sun/tools/javac/tree/DCTree$DCEndPosTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCEntity.h>
#include <com/sun/tools/javac/tree/DCTree$DCErroneous.h>
#include <com/sun/tools/javac/tree/DCTree$DCIdentifier.h>
#include <com/sun/tools/javac/tree/DCTree$DCParam.h>
#include <com/sun/tools/javac/tree/DCTree$DCReturn.h>
#include <com/sun/tools/javac/tree/DCTree$DCText.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <com/sun/tools/javac/tree/EndPosTable.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Position.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

#undef NOPOS
#undef RETURN

using $DocCommentTree = ::com::sun::source::doctree::DocCommentTree;
using $DocTree = ::com::sun::source::doctree::DocTree;
using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $CompilationUnitTree = ::com::sun::source::tree::CompilationUnitTree;
using $Tree = ::com::sun::source::tree::Tree;
using $DocSourcePositions = ::com::sun::source::util::DocSourcePositions;
using $JavacTrees = ::com::sun::tools::javac::api::JavacTrees;
using $JavacTrees$8 = ::com::sun::tools::javac::api::JavacTrees$8;
using $Tokens$Comment = ::com::sun::tools::javac::parser::Tokens$Comment;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCBlockTag = ::com::sun::tools::javac::tree::DCTree$DCBlockTag;
using $DCTree$DCComment = ::com::sun::tools::javac::tree::DCTree$DCComment;
using $DCTree$DCDocComment = ::com::sun::tools::javac::tree::DCTree$DCDocComment;
using $DCTree$DCEndPosTree = ::com::sun::tools::javac::tree::DCTree$DCEndPosTree;
using $DCTree$DCEntity = ::com::sun::tools::javac::tree::DCTree$DCEntity;
using $DCTree$DCErroneous = ::com::sun::tools::javac::tree::DCTree$DCErroneous;
using $DCTree$DCIdentifier = ::com::sun::tools::javac::tree::DCTree$DCIdentifier;
using $DCTree$DCParam = ::com::sun::tools::javac::tree::DCTree$DCParam;
using $DCTree$DCReturn = ::com::sun::tools::javac::tree::DCTree$DCReturn;
using $DCTree$DCText = ::com::sun::tools::javac::tree::DCTree$DCText;
using $EndPosTable = ::com::sun::tools::javac::tree::EndPosTable;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $1Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Position = ::com::sun::tools::javac::util::Position;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$FieldInfo _JavacTrees$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/api/JavacTrees;", nullptr, $FINAL | $SYNTHETIC, $field(JavacTrees$1, this$0)},
	{}
};

$MethodInfo _JavacTrees$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/api/JavacTrees;)V", nullptr, 0, $method(static_cast<void(JavacTrees$1::*)($JavacTrees*)>(&JavacTrees$1::init$))},
	{"getEndPosition", "(Lcom/sun/source/tree/CompilationUnitTree;Lcom/sun/source/tree/Tree;)J", nullptr, $PUBLIC},
	{"getEndPosition", "(Lcom/sun/source/tree/CompilationUnitTree;Lcom/sun/source/doctree/DocCommentTree;Lcom/sun/source/doctree/DocTree;)J", nullptr, $PUBLIC},
	{"getStartPosition", "(Lcom/sun/source/tree/CompilationUnitTree;Lcom/sun/source/tree/Tree;)J", nullptr, $PUBLIC},
	{"getStartPosition", "(Lcom/sun/source/tree/CompilationUnitTree;Lcom/sun/source/doctree/DocCommentTree;Lcom/sun/source/doctree/DocTree;)J", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JavacTrees$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.api.JavacTrees",
	"getSourcePositions",
	"()Lcom/sun/source/util/DocSourcePositions;"
};

$InnerClassInfo _JavacTrees$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.JavacTrees$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavacTrees$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.api.JavacTrees$1",
	"java.lang.Object",
	"com.sun.source.util.DocSourcePositions",
	_JavacTrees$1_FieldInfo_,
	_JavacTrees$1_MethodInfo_,
	nullptr,
	&_JavacTrees$1_EnclosingMethodInfo_,
	_JavacTrees$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.JavacTrees"
};

$Object* allocate$JavacTrees$1($Class* clazz) {
	return $of($alloc(JavacTrees$1));
}

void JavacTrees$1::init$($JavacTrees* this$0) {
	$set(this, this$0, this$0);
}

int64_t JavacTrees$1::getStartPosition($CompilationUnitTree* file, $Tree* tree) {
	return $TreeInfo::getStartPos($cast($JCTree, tree));
}

int64_t JavacTrees$1::getEndPosition($CompilationUnitTree* file, $Tree* tree) {
	$var($EndPosTable, endPosTable, $nc(($cast($JCTree$JCCompilationUnit, file)))->endPositions);
	return $TreeInfo::getEndPos($cast($JCTree, tree), endPosTable);
}

int64_t JavacTrees$1::getStartPosition($CompilationUnitTree* file, $DocCommentTree* comment, $DocTree* tree) {
	return $nc(($cast($DCTree, tree)))->getSourcePosition($cast($DCTree$DCDocComment, comment));
}

int64_t JavacTrees$1::getEndPosition($CompilationUnitTree* file, $DocCommentTree* comment, $DocTree* tree) {
	$useLocalCurrentObjectStackCache();
	$var($DCTree$DCDocComment, dcComment, $cast($DCTree$DCDocComment, comment));
	{
		$var($DCTree$DCEndPosTree, dcEndPosTree, nullptr);
		bool var$0 = $instanceOf($DCTree$DCEndPosTree, tree);
		if (var$0) {
			$assign(dcEndPosTree, $cast($DCTree$DCEndPosTree, tree));
			var$0 = true;
		}
		if (var$0) {
			int32_t endPos = $nc(dcEndPosTree)->getEndPos(dcComment);
			if (endPos != $Position::NOPOS) {
				return endPos;
			}
		}
	}
	int32_t correction = 0;
	$init($JavacTrees$8);
	{
		$var($DCTree$DCText, text, nullptr)
		$var($DCTree$DCErroneous, err, nullptr)
		$var($DCTree$DCIdentifier, ident, nullptr)
		$var($DCTree$DCParam, param, nullptr)
		$var($DocTree, last, nullptr)
		switch ($nc($JavacTrees$8::$SwitchMap$com$sun$source$doctree$DocTree$Kind)->get($nc(($($nc(tree)->getKind())))->ordinal())) {
		case 1:
			{
				$assign(text, $cast($DCTree$DCText, tree));
				return $nc($nc(dcComment)->comment)->getSourcePos($nc(text)->pos$ + $nc(text->text)->length());
			}
		case 2:
			{
				$assign(err, $cast($DCTree$DCErroneous, tree));
				return $nc($nc(dcComment)->comment)->getSourcePos($nc(err)->pos$ + $nc(err->body)->length());
			}
		case 3:
			{
				$assign(ident, $cast($DCTree$DCIdentifier, tree));
				return $nc($nc(dcComment)->comment)->getSourcePos($nc(ident)->pos$ + (!$equals(ident->name, $nc(this->this$0->names)->error) ? $nc(ident->name)->length() : 0));
			}
		case 4:
			{
				$assign(param, $cast($DCTree$DCParam, tree));
				if ($nc(param)->isTypeParameter$ && $nc($(param->getDescription()))->isEmpty()) {
					correction = 1;
				}
			}
		case 5:
			{}
		case 6:
			{}
		case 7:
			{}
		case 8:
			{}
		case 9:
			{}
		case 10:
			{}
		case 11:
			{}
		case 12:
			{}
		case 13:
			{}
		case 14:
			{}
		case 15:
			{
				{
					$var($DocTree, last, this->this$0->getLastChild(tree));
					if (last != nullptr) {
						return getEndPosition(file, comment, last) + correction;
					}
					int32_t pos = 0;
					$var($String, name, nullptr);
					$init($DocTree$Kind);
					if (tree->getKind() == $DocTree$Kind::RETURN) {
						$var($DCTree$DCReturn, dcReturn, $cast($DCTree$DCReturn, tree));
						pos = dcReturn->pos$;
						$assign(name, dcReturn->getTagName());
					} else {
						$var($DCTree$DCBlockTag, block, $cast($DCTree$DCBlockTag, tree));
						pos = block->pos$;
						$assign(name, block->getTagName());
					}
					return $nc($nc(dcComment)->comment)->getSourcePos(pos + $nc(name)->length() + 1);
				}
			}
		case 16:
			{
				{
					$var($DCTree$DCEntity, endEl, $cast($DCTree$DCEntity, tree));
					return $nc($nc(dcComment)->comment)->getSourcePos(endEl->pos$ + (!$equals(endEl->name, $nc(this->this$0->names)->error) ? $nc(endEl->name)->length() : 0) + 2);
				}
			}
		case 17:
			{
				{
					$var($DCTree$DCComment, endEl, $cast($DCTree$DCComment, tree));
					return $nc($nc(dcComment)->comment)->getSourcePos(endEl->pos$ + $nc(endEl->body)->length());
				}
			}
		default:
			{
				$assign(last, this->this$0->getLastChild(tree));
				if (last != nullptr) {
					return getEndPosition(file, comment, last);
				}
				break;
			}
		}
	}
	return $Position::NOPOS;
}

JavacTrees$1::JavacTrees$1() {
}

$Class* JavacTrees$1::load$($String* name, bool initialize) {
	$loadClass(JavacTrees$1, name, initialize, &_JavacTrees$1_ClassInfo_, allocate$JavacTrees$1);
	return class$;
}

$Class* JavacTrees$1::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com