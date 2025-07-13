package com.Math.tests.standard;

import static org.junit.Assert.assertEquals;
import org.junit.Test;
import com.Math.MathLib;

public class MathBuggyLibTest {

    @Test
    public void testAdd() {
        assertEquals(3, MathLib.add(2, 3));
    }

    @Test
    public void testAddNegative() {
        assertEquals(4, MathLib.add(-1, 2));
    }
}