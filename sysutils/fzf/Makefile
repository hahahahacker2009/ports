COMMENT =	command-line fuzzy finder

MODGO_MODNAME = github.com/junegunn/fzf
MODGO_VERSION =	v0.0.0-20240201091300-3c0a6304756e

V =		0.46.1
DISTNAME =	fzf-${V}

CATEGORIES =	sysutils

HOMEPAGE =	https://github.com/junegunn/fzf

MAINTAINER =	Laurent Cheylus <foxy@free.fr>

# BSD
PERMIT_PACKAGE =	Yes

# uses pledge()
WANTLIB +=	c pthread

MODULES =	lang/go
MODGO_TYPE =	bin

MODGO_LDFLAGS +=	-X main.version=${V}
MODGO_LDFLAGS +=	-X main.revision=""

# for patch to apply
WRKDIST =	${WRKSRC}

# Note that unlike zsh and fish, bash has no well-defined site functions
# directory from which to autoload stuff.
#
# Note also that the completion files referenced here are not defining words to
# complete, but rather overriding what happens when the user requests
# completion via typing **<tab>.
ZSH_SITE =	${PREFIX}/share/zsh/site-functions
FISH_SITE =	${PREFIX}/share/fish/functions
BASH_SITE =	${PREFIX}/share/fzf/bash
VIMFILES =	${PREFIX}/share/vim/vimfiles
VIM_PLUGIN =	${VIMFILES}/plugin
VIM_DOC =	${VIMFILES}/doc
SUBST_VARS +=	BASH_SITE FISH_SITE VIMFILES

do-install:
	${INSTALL_PROGRAM} ${WRKDIR}/go/bin/* ${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/bin/* ${PREFIX}/bin
	${INSTALL_MAN_DIR} ${PREFIX}/man/man1
	${INSTALL_MAN} ${WRKSRC}/man/man1/*.1 ${PREFIX}/man/man1

	${INSTALL_DATA_DIR} ${ZSH_SITE}
	${INSTALL_DATA} ${WRKSRC}/shell/key-bindings.zsh \
		${ZSH_SITE}/_fzf_key_bindings
	${INSTALL_DATA} ${WRKSRC}/shell/completion.zsh \
		${ZSH_SITE}/_fzf_completion

	${INSTALL_DATA_DIR} ${FISH_SITE}
	${INSTALL_DATA} ${WRKSRC}/shell/key-bindings.fish \
		${FISH_SITE}/fzf-key-bindings.fish

	${INSTALL_DATA_DIR} ${BASH_SITE}
	${INSTALL_DATA} ${WRKSRC}/shell/key-bindings.bash ${BASH_SITE}
	${INSTALL_DATA} ${WRKSRC}/shell/completion.bash ${BASH_SITE}

	${INSTALL_DATA_DIR} ${VIM_PLUGIN}
	${INSTALL_DATA_DIR} ${VIM_DOC}
	${INSTALL_DATA} ${WRKSRC}/plugin/fzf.vim ${VIM_PLUGIN}/fzf.vim
	${INSTALL_DATA} ${WRKSRC}/doc/fzf.txt ${VIM_DOC}/fzf.txt

.include "modules.inc"

.include <bsd.port.mk>
