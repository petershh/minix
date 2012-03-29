mode_t get_mode(ino, mode)
int do_stat()
  attr.a_mask = HGFS_ATTR_MODE | HGFS_ATTR_SIZE | HGFS_ATTR_CRTIME |
		HGFS_ATTR_ATIME | HGFS_ATTR_MTIME | HGFS_ATTR_CTIME;
  stat.st_atimespec = attr.a_atime;
  stat.st_mtimespec = attr.a_mtime;
  stat.st_ctimespec = attr.a_ctime;
  stat.st_birthtimespec = attr.a_crtime;
int do_chmod()
int do_utime()
  attr.a_atime.tv_sec = m_in.REQ_ACTIME;
  attr.a_atime.tv_nsec = 0;
  attr.a_mtime.tv_sec = m_in.REQ_MODTIME;
  attr.a_mtime.tv_nsec = 0;