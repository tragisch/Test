package com.Math.tests.standard;

import static org.junit.Assert.assertEquals;
import org.junit.Test;
import com.Math.MathLib;

public class MathLibTest {

    @Test
    public void testAdd() {
        assertEquals(5, MathLib.add(2, 3));
    }

    @Test
    public void testAddNegative() {
        assertEquals(1, MathLib.add(-1, 2));
    }
}