COMMENT=	essentially an Asteroids clone

DISTNAME=	sdlroids-1.3.4
REVISION =	4
CATEGORIES=	games

HOMEPAGE=	https://sourceforge.net/projects/sdlroids/

SITES=		${SITE_SOURCEFORGE:=sdlroids/}

# GPL
PERMIT_PACKAGE=	Yes

WANTLIB=	SDL c m pthread SDL_mixer

LIB_DEPENDS=	devel/sdl-mixer
CFLAGS +=	-fgnu89-inline

SEPARATE_BUILD=	Yes
CONFIGURE_STYLE=gnu

post-extract:
	@rm ${WRKSRC}/README.orig

.include <bsd.port.mk>
