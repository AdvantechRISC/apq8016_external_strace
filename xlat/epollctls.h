/* Generated by ./xlat/gen.sh from ./xlat/epollctls.in; do not edit. */

static const struct xlat epollctls[] = {
#if defined(EPOLL_CTL_ADD) || (defined(HAVE_DECL_EPOLL_CTL_ADD) && HAVE_DECL_EPOLL_CTL_ADD)
 XLAT(EPOLL_CTL_ADD),
#endif
#if defined(EPOLL_CTL_MOD) || (defined(HAVE_DECL_EPOLL_CTL_MOD) && HAVE_DECL_EPOLL_CTL_MOD)
 XLAT(EPOLL_CTL_MOD),
#endif
#if defined(EPOLL_CTL_DEL) || (defined(HAVE_DECL_EPOLL_CTL_DEL) && HAVE_DECL_EPOLL_CTL_DEL)
 XLAT(EPOLL_CTL_DEL),
#endif
 XLAT_END
};
