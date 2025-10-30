#include <com/sun/tools/javac/main/CommandLine$Tokenizer.h>

#include <com/sun/tools/javac/main/CommandLine.h>
#include <java/io/Reader.h>
#include <jcpp.h>

using $CommandLine = ::com::sun::tools::javac::main::CommandLine;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

$FieldInfo _CommandLine$Tokenizer_FieldInfo_[] = {
	{"in", "Ljava/io/Reader;", nullptr, $PRIVATE | $FINAL, $field(CommandLine$Tokenizer, in)},
	{"ch", "I", nullptr, $PRIVATE, $field(CommandLine$Tokenizer, ch)},
	{}
};

$MethodInfo _CommandLine$Tokenizer_MethodInfo_[] = {
	{"<init>", "(Ljava/io/Reader;)V", nullptr, $PUBLIC, $method(static_cast<void(CommandLine$Tokenizer::*)($Reader*)>(&CommandLine$Tokenizer::init$)), "java.io.IOException"},
	{"nextToken", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"skipWhite", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _CommandLine$Tokenizer_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.CommandLine$Tokenizer", "com.sun.tools.javac.main.CommandLine", "Tokenizer", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _CommandLine$Tokenizer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.main.CommandLine$Tokenizer",
	"java.lang.Object",
	nullptr,
	_CommandLine$Tokenizer_FieldInfo_,
	_CommandLine$Tokenizer_MethodInfo_,
	nullptr,
	nullptr,
	_CommandLine$Tokenizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.CommandLine"
};

$Object* allocate$CommandLine$Tokenizer($Class* clazz) {
	return $of($alloc(CommandLine$Tokenizer));
}

void CommandLine$Tokenizer::init$($Reader* in) {
	$set(this, in, in);
	this->ch = $nc(in)->read();
}

$String* CommandLine$Tokenizer::nextToken() {
	skipWhite();
	if (this->ch == -1) {
		return nullptr;
	}
	$var($StringBuilder, sb, $new($StringBuilder));
	char16_t quoteChar = (char16_t)0;
	while (this->ch != -1) {
		switch (this->ch) {
		case u' ':
			{}
		case u'\t':
			{}
		case u'\f':
			{
				if (quoteChar == 0) {
					return sb->toString();
				}
				sb->append((char16_t)this->ch);
				break;
			}
		case u'\n':
			{}
		case u'\r':
			{
				return sb->toString();
			}
		case u'\'':
			{}
		case u'\"':
			{
				if (quoteChar == 0) {
					quoteChar = (char16_t)this->ch;
				} else if (quoteChar == this->ch) {
					quoteChar = (char16_t)0;
				} else {
					sb->append((char16_t)this->ch);
				}
				break;
			}
		case u'\\':
			{
				if (quoteChar != 0) {
					this->ch = $nc(this->in)->read();
					switch (this->ch) {
					case u'\n':
						{}
					case u'\r':
						{
							while (this->ch == u' ' || this->ch == u'\n' || this->ch == u'\r' || this->ch == u'\t' || this->ch == u'\f') {
								this->ch = $nc(this->in)->read();
							}
							continue;
						}
					case u'n':
						{
							this->ch = u'\n';
							break;
						}
					case u'r':
						{
							this->ch = u'\r';
							break;
						}
					case u't':
						{
							this->ch = u'\t';
							break;
						}
					case u'f':
						{
							this->ch = u'\f';
							break;
						}
					}
				}
				sb->append((char16_t)this->ch);
				break;
			}
		default:
			{
				sb->append((char16_t)this->ch);
			}
		}
		this->ch = $nc(this->in)->read();
	}
	return sb->toString();
}

void CommandLine$Tokenizer::skipWhite() {
	while (this->ch != -1) {
		switch (this->ch) {
		case u' ':
			{}
		case u'\t':
			{}
		case u'\n':
			{}
		case u'\r':
			{}
		case u'\f':
			{
				break;
			}
		case u'#':
			{
				this->ch = $nc(this->in)->read();
				while (this->ch != u'\n' && this->ch != u'\r' && this->ch != -1) {
					this->ch = $nc(this->in)->read();
				}
				break;
			}
		default:
			{
				return;
			}
		}
		this->ch = $nc(this->in)->read();
	}
}

CommandLine$Tokenizer::CommandLine$Tokenizer() {
}

$Class* CommandLine$Tokenizer::load$($String* name, bool initialize) {
	$loadClass(CommandLine$Tokenizer, name, initialize, &_CommandLine$Tokenizer_ClassInfo_, allocate$CommandLine$Tokenizer);
	return class$;
}

$Class* CommandLine$Tokenizer::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com