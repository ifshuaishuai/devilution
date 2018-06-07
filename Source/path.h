/*
 * UNPUBLISHED -- Rights  reserved  under  the  copyright  laws  of the
 * United States.  Use  of a copyright notice is precautionary only and
 * does not imply publication or disclosure.
 *
 * THIS DOCUMENTATION CONTAINS CONFIDENTIAL AND PROPRIETARY INFORMATION
 * OF    BLIZZARD   ENTERTAINMENT.    ANY   DUPLICATION,  MODIFICATION,
 * DISTRIBUTION, OR DISCLOSURE IS STRICTLY PROHIBITED WITHOUT THE PRIOR
 * EXPRESS WRITTEN PERMISSION OF BLIZZARD ENTERTAINMENT.
 */

//path
extern PATHNODE path_nodes[300];
extern int gdwCurPathStep;
extern int pnode_vals[26];
extern PATHNODE *pnode_ptr;
extern PATHNODE *pnode_tblptr[300];
extern PATHNODE path_2_nodes[300];

int __fastcall FindPath(bool (__fastcall *PosOk)(int, int, int), int PosOkArg, int sx, int sy, int dx, int dy, char *path);
int __fastcall path_get_h_cost(int sx, int sy, int dx, int dy);
int __fastcall path_check_equal(PATHNODE *pPath, int dx, int dy);
PATHNODE *__cdecl GetNextPath();
bool __fastcall path_solid_pieces(PATHNODE *pPath, int dx, int dy);
int __fastcall path_get_path(bool (__fastcall *PosOk)(int, int, int), int PosOkArg, PATHNODE *pPath, int x, int y);
int __fastcall path_parent_path(PATHNODE *pPath, int dx, int dy, int sx, int sy);
PATHNODE *__fastcall path_get_node1(int dx, int dy);
PATHNODE *__fastcall path_get_node2(int dx, int dy);
void __fastcall path_next_node(PATHNODE *pPath);
void __fastcall path_set_coords(PATHNODE *pPath);
void __fastcall path_push_active_step(PATHNODE *pPath);
PATHNODE *__cdecl path_pop_active_step();
PATHNODE *__cdecl path_new_step();

/* data */

extern char pathxdir[8];
extern char pathydir[8];

/* rdata */
extern char path_directions[9];