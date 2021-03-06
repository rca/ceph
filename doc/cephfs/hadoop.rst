========================
Using Hadoop with CephFS
========================

Hadoop Configuration
--------------------

This section describes the Hadoop configuration options used to control Ceph.
These options are intended to be set in the Hadoop configuration file
`conf/core-site.xml`.

+---------------------+--------------------------+----------------------------+
|Property             |Value                     |Notes                       |
|                     |                          |                            |
+=====================+==========================+============================+
|fs.default.name      |Ceph URI                  |ceph:///                    |
|                     |                          |                            |
|                     |                          |                            |
+---------------------+--------------------------+----------------------------+
|ceph.conf.file       |Local path to ceph.conf   |/etc/ceph/ceph.conf         |
|                     |                          |                            |
|                     |                          |                            |
|                     |                          |                            |
+---------------------+--------------------------+----------------------------+
|ceph.conf.options    |Comma separated list of   |opt1=val1,opt2=val2         |
|                     |Ceph configuration        |                            |
|                     |key/value pairs           |                            |
|                     |                          |                            |
+---------------------+--------------------------+----------------------------+
|ceph.root.dir        |Mount root directory      |Default value: /            |
|                     |                          |                            |
|                     |                          |                            |
+---------------------+--------------------------+----------------------------+
|ceph.object.size     |Default file object size  |Default value (64MB):       |
|                     |in bytes                  |67108864                    |
|                     |                          |                            |
|                     |                          |                            |
+---------------------+--------------------------+----------------------------+
|ceph.localize.reads  |Allow reading from file   |Default value: true         |
|                     |replica objects           |                            |
|                     |                          |                            |
|                     |                          |                            |
+---------------------+--------------------------+----------------------------+
