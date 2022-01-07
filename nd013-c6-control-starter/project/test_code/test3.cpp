        int max = height[0];
        int max_ind = 0;
        int curr_ind = 0;
        int area = 0;
        int curr_area = 0;
        int next_area = 0;
        for (int i = 0; i < height.size() - 1; i++) {
            
            if (height[i] > max) {
                max = height[i];
                max_ind = i;
                }
            next_area = fmin(height[curr_ind], height[i+1])*((i+1) - curr_ind);
            curr_area = fmin(max, height[i+1])*((i+1) - max_ind);
            
            if (curr_area > area) {
                area = curr_area;
            }
            
            
        }
        
        return area;