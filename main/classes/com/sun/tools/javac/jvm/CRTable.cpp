#include <com/sun/tools/javac/jvm/CRTable.h>

#include <com/sun/tools/javac/jvm/CRTFlags.h>
#include <com/sun/tools/javac/jvm/CRTable$CRTEntry.h>
#include <com/sun/tools/javac/jvm/CRTable$SourceComputer.h>
#include <com/sun/tools/javac/jvm/CRTable$SourceRange.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/tree/EndPosTable.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/ByteBuffer.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Position$LineMap.h>
#include <com/sun/tools/javac/util/Position.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef CRT_ASSIGNMENT
#undef CRT_BLOCK
#undef CRT_BRANCH_FALSE
#undef CRT_BRANCH_TRUE
#undef CRT_CREATE
#undef CRT_FLOW_CONTROLLER
#undef CRT_FLOW_TARGET
#undef CRT_INVOKE
#undef CRT_STATEMENT
#undef NOPOS

using $CRTFlags = ::com::sun::tools::javac::jvm::CRTFlags;
using $CRTable$CRTEntry = ::com::sun::tools::javac::jvm::CRTable$CRTEntry;
using $CRTable$SourceComputer = ::com::sun::tools::javac::jvm::CRTable$SourceComputer;
using $CRTable$SourceRange = ::com::sun::tools::javac::jvm::CRTable$SourceRange;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $EndPosTable = ::com::sun::tools::javac::tree::EndPosTable;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $ByteBuffer = ::com::sun::tools::javac::util::ByteBuffer;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Position = ::com::sun::tools::javac::util::Position;
using $Position$LineMap = ::com::sun::tools::javac::util::Position$LineMap;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _CRTable_FieldInfo_[] = {
	{"crtDebug", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CRTable, crtDebug)},
	{"entries", "Lcom/sun/tools/javac/util/ListBuffer;", "Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/jvm/CRTable$CRTEntry;>;", $PRIVATE, $field(CRTable, entries)},
	{"positions", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Object;Lcom/sun/tools/javac/jvm/CRTable$SourceRange;>;", $PRIVATE, $field(CRTable, positions)},
	{"endPosTable", "Lcom/sun/tools/javac/tree/EndPosTable;", nullptr, $PRIVATE, $field(CRTable, endPosTable)},
	{"methodTree", "Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;", nullptr, 0, $field(CRTable, methodTree)},
	{}
};

$MethodInfo _CRTable_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;Lcom/sun/tools/javac/tree/EndPosTable;)V", nullptr, $PUBLIC, $method(static_cast<void(CRTable::*)($JCTree$JCMethodDecl*,$EndPosTable*)>(&CRTable::init$))},
	{"encodePosition", "(ILcom/sun/tools/javac/util/Position$LineMap;Lcom/sun/tools/javac/util/Log;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(CRTable::*)(int32_t,$Position$LineMap*,$Log*)>(&CRTable::encodePosition))},
	{"getTypes", "(I)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(CRTable::*)(int32_t)>(&CRTable::getTypes))},
	{"length", "()I", nullptr, $PUBLIC},
	{"put", "(Ljava/lang/Object;III)V", nullptr, $PUBLIC},
	{"writeCRT", "(Lcom/sun/tools/javac/util/ByteBuffer;Lcom/sun/tools/javac/util/Position$LineMap;Lcom/sun/tools/javac/util/Log;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CRTable_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.CRTable$SourceRange", "com.sun.tools.javac.jvm.CRTable", "SourceRange", $STATIC},
	{"com.sun.tools.javac.jvm.CRTable$CRTEntry", "com.sun.tools.javac.jvm.CRTable", "CRTEntry", $STATIC},
	{"com.sun.tools.javac.jvm.CRTable$SourceComputer", "com.sun.tools.javac.jvm.CRTable", "SourceComputer", 0},
	{}
};

$ClassInfo _CRTable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.jvm.CRTable",
	"java.lang.Object",
	"com.sun.tools.javac.jvm.CRTFlags",
	_CRTable_FieldInfo_,
	_CRTable_MethodInfo_,
	nullptr,
	nullptr,
	_CRTable_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.CRTable$SourceRange,com.sun.tools.javac.jvm.CRTable$CRTEntry,com.sun.tools.javac.jvm.CRTable$SourceComputer"
};

$Object* allocate$CRTable($Class* clazz) {
	return $of($alloc(CRTable));
}

void CRTable::init$($JCTree$JCMethodDecl* tree, $EndPosTable* endPosTable) {
	$set(this, entries, $new($ListBuffer));
	$set(this, positions, $new($HashMap));
	$set(this, methodTree, tree);
	$set(this, endPosTable, endPosTable);
}

void CRTable::put(Object$* tree, int32_t flags, int32_t startPc, int32_t endPc) {
	$nc(this->entries)->append($$new($CRTable$CRTEntry, tree, flags, startPc, endPc));
}

int32_t CRTable::writeCRT($ByteBuffer* databuf, $Position$LineMap* lineMap, $Log* log) {
	$useLocalCurrentObjectStackCache();
	int32_t crtEntries = 0;
	$$new($CRTable$SourceComputer, this)->csp(static_cast<$JCTree*>(this->methodTree));
	{
		$var($List, l, $nc(this->entries)->toList());
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$var($CRTable$CRTEntry, entry, $cast($CRTable$CRTEntry, l->head));
			if ($nc(entry)->startPc == entry->endPc) {
				continue;
			}
			$var($CRTable$SourceRange, pos, $cast($CRTable$SourceRange, $nc(this->positions)->get($nc(entry)->tree)));
			$Assert::checkNonNull($of(pos), "CRT: tree source positions are undefined"_s);
			if (($nc(pos)->startPos == $Position::NOPOS) || ($nc(pos)->endPos == $Position::NOPOS)) {
				continue;
			}
			int32_t startPos = encodePosition($nc(pos)->startPos, lineMap, log);
			if (startPos == $Position::NOPOS) {
				continue;
			}
			int32_t endPos = encodePosition($nc(pos)->endPos, lineMap, log);
			if (endPos == $Position::NOPOS) {
				continue;
			}
			$nc(databuf)->appendChar($nc(entry)->startPc);
			databuf->appendChar($nc(entry)->endPc - 1);
			databuf->appendInt(startPos);
			databuf->appendInt(endPos);
			databuf->appendChar($nc(entry)->flags);
			++crtEntries;
		}
	}
	return crtEntries;
}

int32_t CRTable::length() {
	return $nc(this->entries)->length();
}

$String* CRTable::getTypes(int32_t flags) {
	$var($String, types, ""_s);
	if (((int32_t)(flags & (uint32_t)$CRTFlags::CRT_STATEMENT)) != 0) {
		$plusAssign(types, " CRT_STATEMENT"_s);
	}
	if (((int32_t)(flags & (uint32_t)$CRTFlags::CRT_BLOCK)) != 0) {
		$plusAssign(types, " CRT_BLOCK"_s);
	}
	if (((int32_t)(flags & (uint32_t)$CRTFlags::CRT_ASSIGNMENT)) != 0) {
		$plusAssign(types, " CRT_ASSIGNMENT"_s);
	}
	if (((int32_t)(flags & (uint32_t)$CRTFlags::CRT_FLOW_CONTROLLER)) != 0) {
		$plusAssign(types, " CRT_FLOW_CONTROLLER"_s);
	}
	if (((int32_t)(flags & (uint32_t)$CRTFlags::CRT_FLOW_TARGET)) != 0) {
		$plusAssign(types, " CRT_FLOW_TARGET"_s);
	}
	if (((int32_t)(flags & (uint32_t)$CRTFlags::CRT_INVOKE)) != 0) {
		$plusAssign(types, " CRT_INVOKE"_s);
	}
	if (((int32_t)(flags & (uint32_t)$CRTFlags::CRT_CREATE)) != 0) {
		$plusAssign(types, " CRT_CREATE"_s);
	}
	if (((int32_t)(flags & (uint32_t)$CRTFlags::CRT_BRANCH_TRUE)) != 0) {
		$plusAssign(types, " CRT_BRANCH_TRUE"_s);
	}
	if (((int32_t)(flags & (uint32_t)$CRTFlags::CRT_BRANCH_FALSE)) != 0) {
		$plusAssign(types, " CRT_BRANCH_FALSE"_s);
	}
	return types;
}

int32_t CRTable::encodePosition(int32_t pos, $Position$LineMap* lineMap, $Log* log) {
	int32_t line = $nc(lineMap)->getLineNumber(pos);
	int32_t col = lineMap->getColumnNumber(pos);
	int32_t new_pos = $Position::encodePosition(line, col);
	if (new_pos == $Position::NOPOS) {
		$nc(log)->warning(pos, $($CompilerProperties$Warnings::PositionOverflow(line)));
	}
	return new_pos;
}

CRTable::CRTable() {
}

$Class* CRTable::load$($String* name, bool initialize) {
	$loadClass(CRTable, name, initialize, &_CRTable_ClassInfo_, allocate$CRTable);
	return class$;
}

$Class* CRTable::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com