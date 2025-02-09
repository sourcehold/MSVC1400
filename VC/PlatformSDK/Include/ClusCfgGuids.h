//////////////////////////////////////////////////////////////////////////////
//
//  Copyright (c) 2000-2002 Microsoft Corporation
//
//  Module Name:
//      ClusCfgGuids.h
//
//  Description:
//      This file contains external GUID definitions.
//
//////////////////////////////////////////////////////////////////////////////

//
//  Category IDs
//

// {4653EEC4-2788-4ebd-A831-7E0D9F82D6E7}
DEFINE_GUID( CATID_ClusCfgCapabilities,
0x4653eec4, 0x2788, 0x4ebd, 0xa8, 0x31, 0x7e, 0xd, 0x9f, 0x82, 0xd6, 0xe7 );

// {02A34F88-D31A-4688-BDDD-38A739E4F89B}
DEFINE_GUID( CATID_EnumClusCfgManagedResources,
0x2a34f88, 0xd31a, 0x4688, 0xbd, 0xdd, 0x38, 0xa7, 0x39, 0xe4, 0xf8, 0x9b );

// {7C4CAE52-CAC9-499d-82C6-BC6A2177E556}
DEFINE_GUID( CATID_ClusCfgResourceTypes,
0x7c4cae52, 0xcac9, 0x499d, 0x82, 0xc6, 0xbc, 0x6a, 0x21, 0x77, 0xe5, 0x56 );

// {8A43EAD4-10F1-440d-8DAA-1FE38D1698CD}
DEFINE_GUID( CATID_ClusCfgMemberSetChangeListeners,
0x8a43ead4, 0x10f1, 0x440d, 0x8d, 0xaa, 0x1f, 0xe3, 0x8d, 0x16, 0x98, 0xcd );

// {DF406DB4-7872-4a99-BB3C-14A9C33933D1}
DEFINE_GUID( CATID_ClusCfgStartupListeners,
0xdf406db4, 0x7872, 0x4a99, 0xbb, 0x3c, 0x14, 0xa9, 0xc3, 0x39, 0x33, 0xd1 );

// {D5B7210F-29A2-4a89-8F3F-FC00D7313C18}
DEFINE_GUID( CATID_ClusCfgEvictListeners,
0xd5b7210f, 0x29a2, 0x4a89, 0x8f, 0x3f, 0xfc, 0x0, 0xd7, 0x31, 0x3c, 0x18 );


//
//  Class IDs
//

// {6A370489-BB52-4727-B740-08F494163478}
DEFINE_GUID( CLSID_ClusCfgResTypeServices,
0x6a370489, 0xbb52, 0x4727, 0xb7, 0x40, 0x8, 0xf4, 0x94, 0x16, 0x34, 0x78 );

//
//  Major Task IDs for categorizing callback notifications from server components.
//

// {B8453B8F-92FD-4350-A6D9-551FD018B791}
DEFINE_GUID( TASKID_Major_Checking_For_Existing_Cluster,
0xb8453b8f, 0x92fd, 0x4350, 0xa6, 0xd9, 0x55, 0x1f, 0xd0, 0x18, 0xb7, 0x91 );

// {93C32F99-39CA-4d38-9D7F-2707CA0EAF46}
DEFINE_GUID( TASKID_Major_Establish_Connection,
0x93c32f99, 0x39ca, 0x4d38, 0x9d, 0x7f, 0x27, 0x7, 0xca, 0xe, 0xaf, 0x46 );

// {CC5E57B1-4520-4672-B4BA-A288EC42946E}
DEFINE_GUID( TASKID_Major_Check_Node_Feasibility,
0xcc5e57b1, 0x4520, 0x4672, 0xb4, 0xba, 0xa2, 0x88, 0xec, 0x42, 0x94, 0x6e);

// {036BF567-2377-4bb3-8AE1-E4104E2EB3C5}
DEFINE_GUID( TASKID_Major_Find_Devices,
0x36bf567, 0x2377, 0x4bb3, 0x8a, 0xe1, 0xe4, 0x10, 0x4e, 0x2e, 0xb3, 0xc5 );

// {EBC8AEFF-10C3-4d5b-AC17-FC0F4C3871B7}
DEFINE_GUID( TASKID_Major_Check_Cluster_Feasibility,
0xebc8aeff, 0x10c3, 0x4d5b, 0xac, 0x17, 0xfc, 0xf, 0x4c, 0x38, 0x71, 0xb7 );

// {E25968DA-9C7B-42db-ADA9-BC4E34F17E6E}
DEFINE_GUID( TASKID_Major_Reanalyze,
0xe25968da, 0x9c7b, 0x42db, 0xad, 0xa9, 0xbc, 0x4e, 0x34, 0xf1, 0x7e, 0x6e );

// {6D47AF1F-7F17-4b80-8FAB-3A2D19B1233D}
DEFINE_GUID( TASKID_Major_Configure_Resource_Types,
0x6d47af1f, 0x7f17, 0x4b80, 0x8f, 0xab, 0x3a, 0x2d, 0x19, 0xb1, 0x23, 0x3d );

// {7C5F0774-1611-42b5-AF3C-6E124AC4D36B}
DEFINE_GUID( TASKID_Major_Configure_Cluster_Services,
0x7c5f0774, 0x1611, 0x42b5, 0xaf, 0x3c, 0x6e, 0x12, 0x4a, 0xc4, 0xd3, 0x6b);

// {411BCDEC-69D3-4485-8D5D-E19EE77A6DD4}
DEFINE_GUID( TASKID_Major_Configure_Resources,
0x411bcdec, 0x69d3, 0x4485, 0x8d, 0x5d, 0xe1, 0x9e, 0xe7, 0x7a, 0x6d, 0xd4 );

// {64ECA0EA-9CB6-4324-9702-DF15C696C30A}
DEFINE_GUID( TASKID_Major_Client_Log,
0x64eca0ea, 0x9cb6, 0x4324, 0x97, 0x2, 0xdf, 0x15, 0xc6, 0x96, 0xc3, 0xa );

// {05AA0768-5F49-49cd-AFDC-96F9D51802D4}
DEFINE_GUID( TASKID_Major_Server_Log,
0x5aa0768, 0x5f49, 0x49cd, 0xaf, 0xdc, 0x96, 0xf9, 0xd5, 0x18, 0x2, 0xd4 );

// {CD36919C-9F31-46b4-A29D-AC87F4E6CC93}
DEFINE_GUID( TASKID_Major_Client_And_Server_Log,
0xcd36919c, 0x9f31, 0x46b4, 0xa2, 0x9d, 0xac, 0x87, 0xf4, 0xe6, 0xcc, 0x93 );

// {6279EE6C-E99C-47ca-A61E-039C75C5C982}
DEFINE_GUID( TASKID_Major_Gather_Resources,
0x6279ee6c, 0xe99c, 0x47ca, 0xa6, 0x1e, 0x3, 0x9c, 0x75, 0xc5, 0xc9, 0x82);

// {5D59A58F-27B4-418d-81D8-1EA68068B3A3}
DEFINE_GUID( TASKID_Major_Gather_Networks,
0x5d59a58f, 0x27b4, 0x418d, 0x81, 0xd8, 0x1e, 0xa6, 0x80, 0x68, 0xb3, 0xa3);


//
// Task IDs for updating the progress bar.
//

// {FDC75680-7DBB-42ca-8003-E4CDB01FF062}
DEFINE_GUID( TASKID_Major_Update_Progress,
0xfdc75680, 0x7dbb, 0x42ca, 0x80, 0x3, 0xe4, 0xcd, 0xb0, 0x1f, 0xf0, 0x62 );

//
//  Resource Types
//

// {CC558763-3386-42ef-B150-BE793344D45F}
DEFINE_GUID( RESTYPE_PhysicalDisk,
0xcc558763, 0x3386, 0x42ef, 0xb1, 0x50, 0xbe, 0x79, 0x33, 0x44, 0xd4, 0x5f );

// {F004656D-5B48-4580-A1F4-C3EC14983D1E}
DEFINE_GUID( RESTYPE_LocalQuorum,
0xf004656d, 0x5b48, 0x4580, 0xa1, 0xf4, 0xc3, 0xec, 0x14, 0x98, 0x3d, 0x1e );

// {56BFAE11-D2F7-4f4f-9952-55AF19BAC3E9}
DEFINE_GUID( RESTYPE_MajorityNodeSet,
0x56bfae11, 0xd2f7, 0x4f4f, 0x99, 0x52, 0x55, 0xaf, 0x19, 0xba, 0xc3, 0xe9);

// {E61ADE71-C79A-4fda-B1DB-A9B8D20C8B14}
DEFINE_GUID( RESTYPE_IPAddress,
0xe61ade71, 0xc79a, 0x4fda, 0xb1, 0xdb, 0xa9, 0xb8, 0xd2, 0xc, 0x8b, 0x14 );

// {C1D2FE1E-D332-445f-8DA1-12E5E2D37CBF}
DEFINE_GUID( RESTYPE_NetworkName,
0xc1d2fe1e, 0xd332, 0x445f, 0x8d, 0xa1, 0x12, 0xe5, 0xe2, 0xd3, 0x7c, 0xbf );

// {D495B46C-9E0A-4c2b-87B7-FE0C8FA1B32A}
DEFINE_GUID( RESTYPE_GenericApplication,
0xd495b46c, 0x9e0a, 0x4c2b, 0x87, 0xb7, 0xfe, 0xc, 0x8f, 0xa1, 0xb3, 0x2a);

// {F372184D-DFDB-4370-A005-E1EF301B23A4}
DEFINE_GUID( RESTYPE_GenericScript,
0xf372184d, 0xdfdb, 0x4370, 0xa0, 0x5, 0xe1, 0xef, 0x30, 0x1b, 0x23, 0xa4 );

// {DF34FB92-EB0D-453f-ACA9-BF804B8E29BD}
DEFINE_GUID( RESTYPE_GenericService,
0xdf34fb92, 0xeb0d, 0x453f, 0xac, 0xa9, 0xbf, 0x80, 0x4b, 0x8e, 0x29, 0xbd);

// {94D40016-7929-43cb-9141-9F266E4DD379}
DEFINE_GUID( RESTYPE_DHCPService,
0x94d40016, 0x7929, 0x43cb, 0x91, 0x41, 0x9f, 0x26, 0x6e, 0x4d, 0xd3, 0x79);

// {41AE0AA4-2E98-4494-A3DD-167F71C8D630}
DEFINE_GUID( RESTYPE_DTC,
0x41ae0aa4, 0x2e98, 0x4494, 0xa3, 0xdd, 0x16, 0x7f, 0x71, 0xc8, 0xd6, 0x30);

// {71504DB2-153B-481b-9D92-8178C00B365D}
DEFINE_GUID( RESTYPE_FileShare,
0x71504db2, 0x153b, 0x481b, 0x9d, 0x92, 0x81, 0x78, 0xc0, 0xb, 0x36, 0x5d);

// {473959AD-E9C6-4ea1-B23E-D13D994E0987}
DEFINE_GUID( RESTYPE_PrintSpooler,
0x473959ad, 0xe9c6, 0x4ea1, 0xb2, 0x3e, 0xd1, 0x3d, 0x99, 0x4e, 0x9, 0x87);

// {CC2E36C3-3337-4b03-B352-9750C19F31F8}
DEFINE_GUID( RESTYPE_WINSService,
0xcc2e36c3, 0x3337, 0x4b03, 0xb3, 0x52, 0x97, 0x50, 0xc1, 0x9f, 0x31, 0xf8);

//
//  Core resources - special 'RESTYPEs' for specifying dependencies.
//

// {29E11D1A-83DE-4f7d-B585-2A51EAF84D61}
DEFINE_GUID( RESTYPE_ClusterNetName,
0x29e11d1a, 0x83de, 0x4f7d, 0xb5, 0x85, 0x2a, 0x51, 0xea, 0xf8, 0x4d, 0x61);

// {F22D82AE-7CF5-4de1-879A-D9627C13F194}
DEFINE_GUID( RESTYPE_ClusterIPAddress,
0xf22d82ae, 0x7cf5, 0x4de1, 0x87, 0x9a, 0xd9, 0x62, 0x7c, 0x13, 0xf1, 0x94);

// {1AD3811C-3832-4a61-9F3E-24741C49A7B0}
DEFINE_GUID( RESTYPE_ClusterQuorum,
0x1ad3811c, 0x3832, 0x4a61, 0x9f, 0x3e, 0x24, 0x74, 0x1c, 0x49, 0xa7, 0xb0);

//
//  Resource Class Types
//

// {12453A47-8C5E-4837-BAC6-B254B8F264CC}
DEFINE_GUID( RESCLASSTYPE_StorageDevice,
0x12453a47, 0x8c5e, 0x4837, 0xba, 0xc6, 0xb2, 0x54, 0xb8, 0xf2, 0x64, 0xcc );

// {2B66E547-4BDF-4ff7-8881-E42CC7664AE4}
DEFINE_GUID( RESCLASSTYPE_QuorumResource,
0x2b66e547, 0x4bdf, 0x4ff7, 0x88, 0x81, 0xe4, 0x2c, 0xc7, 0x66, 0x4a, 0xe4);

// {91EFC60F-C1A3-4bfb-8093-38512F25DAB6}
DEFINE_GUID( RESCLASSTYPE_CoreIPAddress,
0x91efc60f, 0xc1a3, 0x4bfb, 0x80, 0x93, 0x38, 0x51, 0x2f, 0x25, 0xda, 0xb6);

// {D2E3EB68-346F-4cb2-BC0E-83655FC51793}
DEFINE_GUID( RESCLASSTYPE_CoreNetworkName,
0xd2e3eb68, 0x346f, 0x4cb2, 0xbc, 0xe, 0x83, 0x65, 0x5f, 0xc5, 0x17, 0x93);

// {57A80E0F-6F18-458b-A72A-D1170C479390}
DEFINE_GUID( RESCLASSTYPE_IPAddress,
0x57a80e0f, 0x6f18, 0x458b, 0xa7, 0x2a, 0xd1, 0x17, 0xc, 0x47, 0x93, 0x90 );

// {BBA69EB9-F5D0-487b-92AE-1BA10F392158}
DEFINE_GUID( RESCLASSTYPE_NetworkName,
0xbba69eb9, 0xf5d0, 0x487b, 0x92, 0xae, 0x1b, 0xa1, 0xf, 0x39, 0x21, 0x58 );

