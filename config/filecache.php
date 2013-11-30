<?php

$conf['cache_backends'] = array('sites/all/modules/contrib/filecache/filecache.inc');
$conf['cache_default_class'] = 'DrupalFileCache';
$conf['filecache_directory'] = '/tmp/filecache-joinus2014-staging--' . substr(conf_path(), 6);

?>