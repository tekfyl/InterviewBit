/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
vector<int> Solution::inorderTraversal(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    stack<TreeNode*> st;
    vector<int> v;
    
    TreeNode *curr=A;
    int done = 0;
    while(!done){
        if(curr != NULL){
            st.push(curr);
            curr = curr->left;
        }
        else{
            if(!st.empty()){
                curr = st.top(); st.pop();
                v.push_back(curr->val);
                curr = curr->right;
            }
            else{
                done = 1;
            }
        }
    }
    return v;
}

// 162 205 333 301 294 417 109 1 266 157 87 201 349 400 185 90 174 151 17 291 114 259 324 163 218 94 139 263 137 146 325 280 391 30 362 230 1 179 41 418 302 70 334 42 396 65 123 370 95 255 118 225 336 143 288 21 287 274 25 128 212 406 68 361 211 58 262 83 231 398 327 282 264 386 305 432 261 50 60 105 121 168 373 335 86 188 249 119 300 33 169 107 235 38 136 12 223 35 226 404 125 176 164 171 206 309 332 115 306 285 411 148 209 56 81 154 210 22 222 204 276 129 102 422 138 340 270 191 63 394 416 388 36 238 346 439 198 110 192 273 23 331 401 277 337 43 134 78 213 26 295 46 152 172 246 339 219 160 412 140 384 61 260 304 180 181 236 13 338 84 98 195 100 375 89 62 116 239 29 322 408 215 247 51 173 18 313 232 252 149 67 402 47 6 150 48 380 161 108 348 433 397 359 27 420 390 286 371 381 366 237 214 409 368 187 353 194 438 234 71 258 365 369 314 112 399 69 311 177 59 425 407 52 82 19 44 4 39 73 319 392 80 190 329 193 224 142 415 92 57 350 376 372 130 200 184 248 120 310 20 341 166 278 55 216 7 165

